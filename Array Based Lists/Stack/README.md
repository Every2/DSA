# Stack

A stack is a data structure based on the LIFO (Last In, First Out) principle. You can think of it like a "stack" of dishes, where the last dish added is the first to be removed, until there are no dishes left.

This implementation uses a C array, so the allocation is handled by the compiler.


# Attributes

`data: Array<T, S>`: A fixed-size array. The size can be changed by modifying the value of the `SIZE` macro.

`size: uint`: Counts how many elements are in the stack.

# Operations

`fn init(stack: <T>) -> void`

Sets the `size` attribute to 0.

`fn push(stack: <T>, value: T) -> {void, Error}`

Checks if the stack isn't full. If it isn't, it adds the element to the top of the stack.

`fn pop(stack: <T>) -> {T, Error}`

Removes the element from the top of the stack and returns it.

`fn get(stack: <T>, position: uint) -> {T, Error}` 

Gets the value at the specified position. If the specified position is invalid, it returns an error.


# Helper Functions

`fn is_full(stack: <T>) -> bool`

Checks if the stack's `size` attribute is equal to the `SIZE` macro.

---

`fn is_empty(stack: <T>) -> bool`

Checks if the stack's `size`is equal to 0.
