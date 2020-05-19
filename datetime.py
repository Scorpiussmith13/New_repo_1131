#datetime problem 1
from datetime import datetime
current=datetime.now()
print(current)

#another way
from datetime import date
r_now=date.today()
print(r_now)

#another way !!
r_now2=r_now.strftime("%B,%d,%y")
print(r_now2)