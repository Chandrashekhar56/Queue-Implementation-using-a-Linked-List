class Node_for_Queue:
	def __init__(self, value):
		self.data_part = value
		self.next_part = None
class Queue:
	def __init__(self):
		self.front_end = self.rear_end = None
	def EnqueueOperation(self, item):
		print("After Element Inserted: ",end='')
		temp = Node_for_Queue(item)
		if self.rear_end == None:
			self.front_end = self.rear_end = temp
			ptr=self.front_end
			while ptr != None:
				print(ptr.data_part,"<-",end=' ')
				ptr=ptr.next_part
		else:
			self.rear_end.next_part = temp
			self.rear_end = temp
			ptr=self.front_end
			while ptr != None:
				print(ptr.data_part,"<-",end=' ')
				ptr=ptr.next_part
		print(" ")

	def DequeueOperation(self):
		if self.front_end == None:
			print("Queue is empty")
		else:
			self.front_end=self.front_end.next_part
			if self.front_end==None:
				self.rear_end=None
				print("Queue is empty")
			else:
				print("After Element Deleted: ",end='')
				if self.front_end!=None:
					ptr=self.front_end
					while ptr!= None:
						print(ptr.data_part,"->",end=" ")
						ptr=ptr.next_part
					print(" ")

	def display(self):
		if self.front_end==None or self.rear_end==None:
			print("Queue is empty")
		else:
			print("Elements in Queue: ",end=' ')
			ptr=self.front_end
			while ptr!=None:
				print(ptr.data_part,end=' ')
				ptr=ptr.next_part

	def	Position_of_front_And_rear(self):
		if self.front_end ==None or self.rear_end ==None:
			print("Queue is empty ")
		else:
			print("Position of front_end in Queue : " , self.front_end.data_part)
			print("Position of rear_end in Queue : " ,self.rear_end.data_part)

if __name__== '__main__':
	ob = Queue()
	ob.EnqueueOperation(11)
	ob.EnqueueOperation(21)
	ob.EnqueueOperation(31)
	ob.EnqueueOperation(41)
	ob.EnqueueOperation(51)
	ob.EnqueueOperation(61)
	ob.EnqueueOperation(71)
	ob.EnqueueOperation(81)
	ob.EnqueueOperation(91)
	ob.EnqueueOperation(101)
	ob.EnqueueOperation(111)
	ob.EnqueueOperation(121)
	print(" ")
	ob.DequeueOperation()
	ob.DequeueOperation()
	ob.DequeueOperation()
	ob.DequeueOperation()
	ob.DequeueOperation()
	ob.DequeueOperation()
	print(" ")
	ob.Position_of_front_And_rear()
	print(" ")
	ob.display()
	print(" ")
