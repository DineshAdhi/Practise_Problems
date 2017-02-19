from firebase import firebase

firebase =firebase.FirebaseApplication('https://testing-3ea0c.firebaseio.com/');

result=firebase.post('/data',{'data' : 'data'});
print result;
