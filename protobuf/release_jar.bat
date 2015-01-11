cd server
call ant clean jar
cd ..
copy /B generated\jar\cwa-sanguo-messages.jar ..\server\lib
copy /B generated\cwa-sanguo-messages-Revision.txt ..\server\lib
pause