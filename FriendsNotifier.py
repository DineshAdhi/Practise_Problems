from bs4 import BeautifulSoup
from selenium import webdriver
import urllib2
import requests

browser=webdriver.Chrome("./chromedriver")
browser.set_window_size(1000,1000)
browser.get("https://www.facebook.com")
browser.find_element_by_name("email").send_keys("dinesh10c04@gmail.com")
browser.find_element_by_name("pass").send_keys("315823312901872607100721")
browser.find_element_by_id('u_0_l').click();
elements= browser.find_elements_by_xpath('//div[@class="_55lr"]//text()')
