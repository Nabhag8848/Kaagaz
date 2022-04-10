#Linked List
class Node:
  def __init__(self, data = None, next=None): 
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self):  
    self.head = None
  
  def insert(self, data):
    newNode = Node(data)
    if(self.head):
      current = self.head
      while(current.next):
        current = current.next
      current.next = newNode
    else:
      self.head = newNode
  
  def delete(self, data):

    if(self.head == None):
      return
    
    current = self.head

    if(current.data == data):
        self.head = self.head.next
        return 
    
    while(current != None and current.next != None and current.next.data != data):
        current = current.next

    if(current != None):
        current.next = current.next.next

  def printLL(self):
    current = self.head
    while(current):
      print(current.data, end = " -> ")
      current = current.next
    print("Null")

LL = LinkedList()
LL.insert(3)
LL.insert(4)
LL.insert(5)
LL.insert(10)
LL.insert(3)
LL.insert(4)
LL.insert(5)
LL.insert(10)
LL.printLL()
LL.delete(5)
LL.delete(10)
LL.printLL()


class Stack:

    def __init__(self):
        self.stack = []

    def isEmpty(self) -> bool:
        return True if len(self.stack) == 0 else False

    def length(self) -> int:
        return len(self.stack)

    def top(self) -> int:
        return self.stack[-1]  

    def push(self, x: int) -> None:
        self.x = x
        self.stack.append(x)       

    def pop(self) -> None:
        self.stack.pop()

stack = Stack()
stack.push(4)
stack.push(5)
stack.push(6)
stack.push(7)
print(stack.length())
print(stack.isEmpty())
print(stack.top())
stack.pop()
print(stack.top())

class Queue:

    def __init__(self):
        self.queue = []

    def isEmpty(self) -> bool:
        return True if len(self.queue) == 0 else False

    def front(self) -> int:
        return self.queue[-1]

    def rear(self) -> int:
        return self.queue[0]

    def enqueue(self, x: int) -> None:
        self.x = x
        self.queue.insert(0, x)       

    def dequeue(self) -> None:
        self.queue.pop()

queue = Queue()
queue.enqueue(4)
queue.enqueue(5)
queue.enqueue(7)
queue.enqueue(8)
print(queue.isEmpty())
print(queue.front())
print(queue.rear())
queue.dequeue()
print(queue.front())

class BinaryTree:

    def __init__(self, value):

        self.left = None
        self.right = None
        self.value = value

    def insert(self, value):

        if self.value:
            if value < self.value:
                if self.left is None:
                    self.left = BinaryTree(value)
                else:
                    self.left.insert(value)
            elif value > self.value:
                if self.right is None:
                    self.right = BinaryTree(value)
                else:
                    self.right.insert(value)
        else:
            self.value = value

    def inorder(self):
        if self.left:
            self.left.inorder()
        print(self.value, end=" ")
        if self.right:
            self.right.inorder()

    def postOrder(self):
        if self.left:
            self.left.postOrder()
        
        if self.right:
            self.right.postOrder()

        print(self.value, end=" ")
    
    def preOrder(self):
        print(self.value, end=" ")
        if self.left:
            self.left.preOrder()
        
        if self.right:
            self.right.preOrder()


root = BinaryTree(100)
root.insert(50)
root.insert(55)
root.insert(60)
root.insert(20)
root.insert(52)

print('Inorder: ')
root.inorder()
print()
print('PreOrder: ')
root.preOrder()
print()
print('PostOrder: ')
root.postOrder()
print()
