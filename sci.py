from sklearn import datasets
from sklearn import svm
numbers=datasets.load_digits()
print numbers.images[0]

clf=svm.SVC(gamma=0.0001, C=100)

x,y=numbers.data,numbers.target
clf.fit(x,y)

print 'Prediction',clf.predict(numbers.data[25])
