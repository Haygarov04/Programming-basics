#lists
my_list = [1, 2, 3, 4, "Python"]
print(my_list)        # [1, 2, 3, 4, 'Python']


my_list.append(5)
print(my_list)        # [1, 2, 3, 4, 'Python', 5]


my_list.remove(3)
print(my_list)        # [1, 2, 4, 'Python', 5]


#Tuples
my_tuple = (1, 2, 3, "Python")
print(my_tuple)
# my_tuple[0] = 10  # TypeError: 'tuple' object does not support item assignment


#Dictionaries
my_dict = {"name": "John", "age": 25, "city": "New York"}
print(my_dict)       # {'name': 'John', 'age': 25, 'city': 'New York'}

print(my_dict["name"])   # John

my_dict["job"] = "Developer"
print(my_dict)       # {'name': 'John', 'age': 25, 'city': 'New York', 'job': 'Developer'}

#Enumerations
from  enum import Enum

class Weekday(Enum):
    MONDAY = 1
    TUESDAY = 2
    WEDNESDAY = 3
    THURSDAY = 4
    FRIDAY = 5

print(Weekday.MONDAY)        # Weekday.MONDAY
print(Weekday.MONDAY.value)  # 1


if Weekday.MONDAY == Weekday.MONDAY:
    print("It is Monday!")