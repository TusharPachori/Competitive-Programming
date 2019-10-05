f = int(input())

w1 = int(input())
w2 = int(input())
w3 = int(input())
w4 = int(input())
w5 = int(input())

eng = 10000
total_mass = eng + w1 + w2 + w3 + w4 + w5

t5=(w5)*f/total_mass
t4=(w5+w4)*f/total_mass
t3=(w5+w4+w3)*f/total_mass
t2=(w5+w4+w3+w2)*f/total_mass
t1=(w5+w4+w3+w2+w1)*f/total_mass
if t5>20000:
    total_mass=total_mass-w5
elif t4>25000:
    total_mass= total_mass-w5-w4
elif t3>35000:
    total_mass= total_mass-w5-w4-w3
elif t2>40000:
    total_mass= total_mass-w5-w4-w2
elif t1>45000:
    total_mass= total_mass-w5-w4-w3-w2-w1

acc = f/total_mass

speed = acc*5*60

print(int(speed+0.5))

