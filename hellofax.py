from selenium import webdriver
from twilio import TwilioRestException
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.by import By
from twilio.rest import TwilioRestClient
import time

print("Python hellofax script running.......")
print("Loading website(hellofax.com).....................")
#browser=webdriver.PhantomJS();
browser=webdriver.Chrome('/home/dinesh10c04/Desktop/Pro/chromedriver')
browser.get("https://www.hellofax.com")
wait=WebDriverWait(browser,10);
wait.until(EC.element_to_be_clickable((By.ID,'signinButton')))
browser.get_screenshot_as_png('Image')
browser.find_element_by_id('signinButton').click()
print("Sign in page opened")
time.sleep(4)
browser.find_element_by_id('login_email_address').send_keys('dineshfax@gmail.com')
print("Email input success")
browser.find_element_by_id('login_password').send_keys('3158233dinesh')
print("Password input success")
print("Loggin in ........")
browser.find_element_by_id('login').click()
print("Uploading the fax.......")
browser.find_element_by_name('file').send_keys('/home/dinesh10c04/Desktop/fax')
print("Fax uploaded....")
browser.find_element_by_xpath('//input[@class="recipient ui-autocomplete-input"]').send_keys('04424500050')
print("Hostel fax number input sucess....")
browser.find_element_by_xpath('//div[@style="z-index: 998;"]').click()
browser.find_element_by_xpath('//span[@class="destination multiple_destinations"]').click()
browser.find_element_by_xpath('//div[@country="India"]').click()
print("India destination selection sucess")
browser.find_element_by_id('tsm_group_send_submit')
print("Send element found")
