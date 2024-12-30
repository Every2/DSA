# Queue

A queue is a data structure based on FIFO (First in, First out) principle. You can think of it like a "queue" in real life, the first person buy a ticket and go out.

# Attributes

`Data: T`: The pointer where elements are stored.
`Capacity: uint`: The total capacity of objects the list can hold.
`Size: uint`: The number of elements currently in the list.
`Start: uint`: The start point of queue.

# Operations

`fn init() -> {void, Exception}`

Initialize the queue

---

`fn enqueue(queue: self, value: T) -> bool` 

Put the element at the start of queue, if everything goes right return true.

---

`fn dequeue(queue: self) -> {T, Error}`

Check if the queue is empty, if it's true return an error. Otherwise remove the element and return it.

# Helper Function

`fn resize(queue: self) -> void`

Case where the array increases in size:

Alloc a new object of size 2n and copy it.

Case where the array decreases:

If the size is three times smaller than the capacity, resize to save space.

---

`fn is_empty(queue: self) -> bool`

Check if the size is equal to 0.

---

`fn free_queue(queue: self) -> void`

Free the dynamic allocated memory for queue.

---

`fn get(queue: self, position: uint) -> {T, Error}`

Gets the element at specified position, if position is greater than the number of elements return an error.
