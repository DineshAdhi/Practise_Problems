import requests
import json

class fireDataBase(object):
    def __init__(self,firebaseURL,access_token=None):
        self.url = firebaseURL;
        self.auth=access_token;

    def getData(self, endpoint):
        self.dataURL = self.url+endpoint+".json?auth="+self.auth;
        response = requests.get(self.dataURL);
        print(response.json());
        return response.json();

    def pushData(self,endpoint, data):
        response = requests.post(self.url+endpoint+".json?auth="+self.auth, data)
        print(response.json())

    def setData(self, endpoint ,data):
        response = requests.put(self.url+endpoint+".json?auth="+self.auth, data)
        print(response.json())



services = fireDataBase("https://practise-c21f1.firebaseio.com/","NdrUMzae6X9vJynTLySIldraC0YqHdGAilxyye57");

data = json.dumps({'name':{'dinesh': 'naveen'}})
services.setData('images', data)
services.getData('images')
