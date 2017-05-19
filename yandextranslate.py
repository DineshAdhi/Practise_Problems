import requests
from BeautifulSoup import BeautifulSoup as bs
#response = requests.get("https://translate.yandex.net/api/v1.5/tr/translate?key=trnsl.1.1.20170508T175121Z.c2202e77aa3bb4a7.7d73016a5863e323330bc11d1ba6a32f73dda0a2&text=hello&lang=ta")
data = { 'key' : "trnsl.1.1.20170508T175121Z.c2202e77aa3bb4a7.7d73016a5863e323330bc11d1ba6a32f73dda0a2",
        'text' : "",
        'lang' : "ta"};
response = requests.get("https://translate.yandex.net/api/v1.5/tr/translate", data);


print(response.text)
