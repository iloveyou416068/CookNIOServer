cd server
call ant clean jar
cd ..
copy /B generated\jar\cwa-sanguo-messages.jar ..\server\lib
pause