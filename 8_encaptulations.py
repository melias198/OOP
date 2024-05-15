class A:
    __value = 0
    name = ''
    _age = 0
    
    def setter(self,val):
        self.__value = val
    
    def getter(self):
        return self.__value
    
    

obj = A()

obj.name = "Elias"
# obj.__value = 90
obj.setter(90)
obj._age = 10

print(obj.name)
# print(obj.__value)
print(obj.getter())
print(obj._age)