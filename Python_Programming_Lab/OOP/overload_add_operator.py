class Time:
    def __init__(self):
        self.__hours=int(input("Enter the hour : "))
        self.__minutes=int(input("Enter the minute : "))
        self.__seconds=int(input("Enter the second : "))
    def __add__(obj1,obj2):
        hours=obj1.__hours+obj2.__hours
        minutes=obj1.__minutes+obj2.__minutes
        seconds=obj1.__seconds+obj2.__seconds
        print("Sum of hours = ",hours)
        print("Sum of minutes = ",minutes)
        print("Sum of seconds = ",seconds)
        if hours>=24:
            hours=hours%24
        if minutes>=60:
            hours=hours+minutes//60
            minutes=minutes%60
        if seconds>=60:
            minutes=minutes+seconds//60
            seconds=seconds%60
        return hours,minutes,seconds
print("****Enter the time of first object****")
obj1=Time()
print("****Enter the time of second object****")
obj2=Time()
print("Sum of 2 time : ",obj1+obj2)