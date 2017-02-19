import requests
payload = {'key' : 'AIzaSyBe9iVkgYTaAOyR3R4bXGHMzWDssWapS-4', 'target' : 'ta', 'q': 'I%20am%20fine'}


response = requests.get("https://translation.googleapis.com/language/translate/v2/",params=payload)

print response.json();
