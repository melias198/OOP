class A:
    value = 0
    name = ''
    
    def display(self):
        print("This is from method")
        print(self.value)
        print(self.name)


obj = A()

obj.value = 100
obj.name = 'Object'

obj.display()


