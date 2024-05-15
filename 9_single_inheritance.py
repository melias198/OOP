class A:
    __value = 0
    name = ''
    _age = 0
    
    def setter(self,val):
        self.__value = val
    
    def getter(self):
        return self.__value
    
    
class B(A):
    def __init__(self,val,name,age):
        self.name = name
        self._age = age
        self.setter(val)
        
    def display(self):
        # print(self.__value)
        print(self.getter())
        print(self.name)
        print(self._age)
    

obj = A()

# obj.name = "Elias"
# obj.__value = 90
# obj.setter(90)
# obj._age = 10


# print(A.__dict__)
# print(obj.__dict__)

newObj = B(40,'Karim',45)
newObj.display()

print(newObj.__dict__)

# obj.display()