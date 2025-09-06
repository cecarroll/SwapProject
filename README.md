 # SwapProject
 
```
int keepGoing = 1;
int arraylen=9;

prototype printValues function
prototype sort function
prototype swap function

int main()
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5}; //array initialized
  print "before" in new line
  print values in new line
  int x = 3 
  int y = 5
  print x: 3 y: 5
  swap x, y 
  print y: 5 x: 3
  sort(values)
  print "After" in new line
  print values in new line



function printValues(array):
  for i from zero to MAX - 1: 
    print(array[i])

function swap (array[i], array[j]):
  int temp
  temp equals a
  a equals b
  b equals temp 


function sort(array)
  while keepGoing = True
  keepGoing = False
  for i in max-1
    if array[i] > array[i+1]
      swap[array[i], array[i+1]]
      keepGoing = True
```

In text here, I'll explain some of my thought processes and the functions. 

The print values function is pretty straight-forward and gives an example of how we can print while taking pointers as inputs. This syntax is different from what ends up happening in the sort for loop.
I really wanted there to be a way to swap the values without a temp variable but after thinking about pointers and passing by reference and value for a while and running some small tests, I asked chatgpt and she said it wasn't possible.
And finally, the sort: I hadn't looked at the pseudocode in a while and used a while loop instead. Maybe I'll make everything into a keepGoing machine by the end of the year. But it's important here too, how we have to navigate the pointers. In the first case, I think because we are referencing them to print, they can be a pointer, but because we are trying to get their values in the if statement, we have to de-reference them first. I am honestly not sure why the a + i couldn't have been an a[i] like in the printValues function, unless it lends itself to the printf function or something that printf likes. 
