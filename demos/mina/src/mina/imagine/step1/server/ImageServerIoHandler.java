/*
 *   Licensed to the Apache Software Foundation (ASF) under one
 *   or more contributor license agreements.  See the NOTICE file
 *   distributed with this work for additional information
 *   regarding copyright ownership.  The ASF licenses this file
 *   to you under the Apache License, Version 2.0 (the
 *   "License"); you may not use this file except in compliance
 *   with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing,
 *   software distributed under the License is distributed on an
 *   "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *   KIND, either express or implied.  See the License for the
 *   specific language governing permissions and limitations
 *   under the License.
 *
 */
package mina.imagine.step1.server;

import mina.imagine.step1.ImageRequest;
import mina.imagine.step1.ImageResponse;

import org.apache.mina.core.service.IoHandlerAdapter;
import org.apache.mina.core.session.IoSession;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.image.BufferedImage;

/**
 * server-side {@link org.apache.mina.core.service.IoHandler}
 *
 * @author <a href="http://mina.apache.org">Apache MINA Project</a>
 */

public class ImageServerIoHandler extends IoHandlerAdapter {

    private final static String characters = "mina rocks abcdefghijklmnopqrstuvwxyz0123456789";

    public static final String INDEX_KEY = ImageServerIoHandler.class.getName() + ".INDEX";

    private static Logger LOGGER = LoggerFactory.getLogger(ImageServerIoHandler.class);

    /**
     * Called when the session is opened, which will come after the session created.
     * 
     * @see org.apache.mina.core.service.IoHandlerAdapter#sessionOpened(org.apache.mina.core.session.IoSession)
     */
    public void sessionOpened(IoSession session) throws Exception {
        session.setAttribute(INDEX_KEY, 0);
    }

    /**
     * This method will be called whenever an exception occurs.  For this handler,
     * the logger will generate a warning message.
     * 
     * @see org.apache.mina.core.service.IoHandlerAdapter#exceptionCaught(org.apache.mina.core.session.IoSession, java.lang.Throwable)
     */
    public void exceptionCaught(IoSession session, Throwable cause) throws Exception {
        LOGGER.warn(cause.getMessage(), cause);
    }

    /**
     * Handle incoming messages.
     * 
     * @see org.apache.mina.core.service.IoHandlerAdapter#messageReceived(org.apache.mina.core.session.IoSession, java.lang.Object)
     */
    public void messageReceived(IoSession session, Object message) throws Exception {
        ImageRequest request = (ImageRequest) message;
        String text1 = generateString(session, request.getNumberOfCharacters());
        String text2 = generateString(session, request.getNumberOfCharacters());
        BufferedImage image1 = createImage(request, text1);
        BufferedImage image2 = createImage(request, text2);
        ImageResponse response = new ImageResponse(image1, image2);
        session.write(response);
    }

    /**
     * Create an image using the specified request and the text.  
     *
     * @param request
     *  Determines the height and width of the image
     * @param text
     *  The text that is placed in the image
     * @return
     *  a BufferedImage representing the text.
     */
    private BufferedImage createImage(ImageRequest request, String text) {
        BufferedImage image = new BufferedImage(request.getWidth(), request.getHeight(), BufferedImage.TYPE_BYTE_INDEXED);
        Graphics graphics = image.createGraphics();
        graphics.setColor(Color.YELLOW);
        graphics.fillRect(0, 0, image.getWidth(), image.getHeight());
        Font serif = new Font("serif", Font.PLAIN, 30);
        graphics.setFont(serif);
        graphics.setColor(Color.BLUE);
        graphics.drawString(text, 10, 50);
        return image;
    }

    /**
     * Generate a string based on the 'characters' field in this class.  The
     * characters that make up the string are based on the session 
     * attribute "INDEX_KEY"
     *
     * @param session
     *  The {@link IoSession} object that will provide the INDEX_KEY attribute
     * @param length
     *  The length that the String will be
     * @return
     *  The generated String
     */
    private String generateString(IoSession session, int length) {
        Integer index = (Integer) session.getAttribute(INDEX_KEY);
        StringBuffer buffer = new StringBuffer(length);
        while (buffer.length() < length) {
            buffer.append(characters.charAt(index));
            index++;
            if (index >= characters.length()) {
                index = 0;
            }
        }
        session.setAttribute(INDEX_KEY, index);
        return buffer.toString();
    }

}
