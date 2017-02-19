from selenium import webdriver
from selenium.webdriver.common.keys import Keys

userelement=[]




driver=webdriver.Chrome('/home/dinesh10c04/Desktop/Pro/chromedriver')
driver.get('https://www.facebook.com')
print('Accessing facebook')
email=driver.find_element_by_id("email")
email.send_keys("dineshdikilona")
print('Email written')
password=driver.find_element_by_id("pass")
password.send_keys("315823312901872607100721")
print('Password written')
driver.find_element_by_xpath('//input[@id="u_0_m"]').click()
print('Login clicked')
for user in (driver.find_elements_by_xpath('//div[@class="_55lr"]')):
    userelement.append(user.text)
    print(user.text)

name=raw_input("Enter your name")
driver.implicitly_wait(10)
driver.find_element_by_xpath('//div[@class="_55lr" and contains(text(), name)]').click()
messagebox=driver.find_element_by_xpath('//div[@class="_1mf _1mj"]')
messagebox.send_keys("Hey this is an automated message from an python scirpt. A testing program by Dinesh Adhithya. Please dont bother to reply back. Thank you")
messagebox.submit()
