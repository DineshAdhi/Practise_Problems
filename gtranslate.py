#import requests
#payload = {'key' : 'AIzaSyCnWlnOu0NHjNqD5pQRWjRVxxV5GpqD8Iw', 'target' : 'ta', 'q': 'I%20am%20fine'}


#response = requests.get("https://translation.googleapis.com/language/translate/v2/",params=payload)

#print response.json();

import requests
class module(object):
    def __init__(self,key=None):
        self.key= key;
        self.target = None;
        self.text = None;
        self.payload = None;

    def encode(self,string):
        encoded_text = string.replace(' ', "%20");
        return encoded_text;

    def translate(self,target='ta', text=None):
        if(text==None):
            string = raw_input("Please enter the text to translate : ");
        else:
            string = text;

        if(target==None):
            print("Please try again, you haven't mentioned the target language to translate")

        self.text = self.encode(string)
        self.target = target;

        print self.text

        self.payload = {'key': self.key, 'target':self.target, 'q':self.text};

        #response = requests.get("https://translation.googleapis.com/language/transalte/v2/", params=self.payload)

        response = requests.get("https://translation.googleapis.com/language/translate/v2/",params=self.payload)

        print response.json();
