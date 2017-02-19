import pyrebase


config={
    "authDomain":"pythontesting-714da.firebase.com",
    "apiKey":"OzLlz3vDLtEATCahkyxNHP1vI2wkkfeUoYDBA5ZX",
    "storageBucket":"pythontesting-714da.appspot.com",
    "databaseURL":"https://pythontesting-714da.firebaseio.com/"}

firebase=pyrebase.initialize_app(config)
database =firebase.database();

def stream_handler(post):
    if(post['data']):
        print str(post['data']);

my_stream=database.child('data').child('users').stream(stream_handler)
