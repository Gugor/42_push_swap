# 42_push_swap
Is a proyect that aims you to sort an array of ints with the shortest amount of 
movements possible.

You are given two arrays a & b, and just some movements are allowed:

sa: swaps the first for second item on the array a
sb: same bu in b
ss: swap both a and b at the same time
ra: rotate a, meaning that first become last and all items in between move up by one
rb: rotate b, is the same but in b
rr: rotate a & b at the same time
rra: reverse rotata a, last become first and all other items move down by one
rrb: the same but in b.
rrr: reverse rotate a & b at the same time
pa: push the first item in b into a and move the other down by one
pb: the same but in b

# The sorting algorithm
The goal of this project is to sort array a in ascendent (index 0 should be the min of the list) order with the shortest amount of movements.

How can we do this?

We can install somthing that could be a kind of cost mesure, so we can try to estimate how many movements could cost us to move from an item into the desired position.

Distance from desired position. We can find the desired position findinf the bigest and smaller numbers and sort from those references.

Lets think about a chinese restaurant where we find one water sorting the orders, he has two spining plates left and right. 
To keep the food warm, the plate are closed just leaving an openin in the side of the waiter, he can get one order at a time.
The cook sets the command as he cook them, but he doesn't care about the age of the commands so he cooks in no particular order.
The cook sets the finish order into first plate, lets call it A and then the right plate B is empty. The waiter needs to sort the plate A from the newest to the oldest command to be able to give the correct commant to the correct client that are waiting in a line for getting their food.

For this example lets think that each plate can hold 10 commands at a time.
So we can accept just 10 clients as a time. The waiter needs to do the least amount of movements to serve the customers as soon as possible. It's freezing outside so 

We can say that the
```
 	0 1 2 3 4 5 6 7 8 9
   _ _ _:_ _ _ _ _:_ _ 
I |_|_|_|_|_|_|_|_|_|_| L
```
limup = len * 0,2 + 1;
limdn = len - limtup + 1;
while (A)
	if (A[0] > B[0]) //If A > B push a in b
		pb();
	else if (A[0] < B[n]) // If A is smaller than last o B revers one and push and rotate
		rrb();
		pb();
		rb();
	else if (A[0] < B[0])
		go_check_on
		if(A[0] < B[limdn])
			while (A[0] > B[len])
				rrb();

	find_place_in_bottom = while (indx > limdn)
							if(A[0] > B[n-indx])
							

