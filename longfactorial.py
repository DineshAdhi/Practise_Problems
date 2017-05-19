def fact(a):
    res = 1;
    for i in range(a):
        res = res * (i+1);
    return res;

a = raw_input();
print fact(int(a));
