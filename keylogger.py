import pyftp
import datetime

file=open("/Users/dineshadhithya/Desktop/Resume.docx",'rb')
ftp = pyftp.FTP('ftp.drivehq.com');
ftp.login('dinesh10c04@gmail.com', '3158233Dinesh');
ftp.storbinary('STOR '+ str(datetime.date.today()), file)
ftp.close()

print "File upload Success"
