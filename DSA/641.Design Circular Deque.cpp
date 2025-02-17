class MyCircularDeque {
public:
    int front, rear, size; // front and rear pointers, and max size of the deque
    int *arr; // Pointer to the dynamically allocated array

    // Constructor: Initializes the deque with a maximum size of k.
    MyCircularDeque(int k) {
        size = k; // Set the size of the deque
        arr = new int[k]; // Allocate memory for the array
        rear = front = -1; // Initialize front and rear to -1 (empty deque)
    }

    // Inserts an element at the front of the deque.
    bool insertFront(int value) {
        // Check if the deque is full.
        if (isFull()) {
            return false; // Insertion failed, deque is full.
        }

        // If deque is empty, set front and rear to 0.
        if (isEmpty()) {
            front = rear = 0;
        }
        // If not empty, move front one step back in a circular manner.
        else {
            front = (front - 1 + size) % size; // Ensure front stays within the bounds (circular).
        }
        arr[front] = value; // Insert the value at the new front position.
        return true; // Insertion successful.
    }

    // Inserts an element at the rear of the deque.
    bool insertLast(int value) {
        // Check if the deque is full.
        if (isFull()) {
            return false; // Insertion failed, deque is full.
        }

        // If deque is empty, set front and rear to 0.
        if (isEmpty()) {
            front = rear = 0;
            arr[0] = value; // Insert the value in the first position
            return true;
        }
        // If not empty, move rear one step forward in a circular manner.
        else {
            rear = (rear + 1) % size;
            arr[rear] = value; // Insert the value at the new rear position.
            return true;
        }
    }

    // Deletes an element from the front of the deque.
    bool deleteFront() {
        // Check if the deque is empty.
        if (isEmpty()) return false; // Deletion failed, deque is empty.

        // If only one element is present, reset front and rear to -1.
        if (front == rear) {
            front = rear = -1; // Deque is now empty.
        }
        // Move front one step forward in a circular manner.
        else {
            front = (front + 1) % size; // Move front, wrapping around if necessary.
        }
        return true; // Deletion successful.
    }

    // Deletes an element from the rear of the deque.
    bool deleteLast() {
        // Check if the deque is empty.
        if (isEmpty()) return false; // Deletion failed, deque is empty.

        // If only one element is present, reset front and rear to -1.
        if (front == rear) {
            front = rear = -1; // Deque is now empty.
        }
        // Move rear one step backward in a circular manner.
        else {
            rear = (rear - 1 + size) % size; // Ensure rear stays within bounds (circular).
        }
        return true; // Deletion successful.
    }

    // Gets the front element of the deque. If the deque is empty, return -1.
    int getFront() {
        // If deque is empty, return -1.
        if (isEmpty()) return -1;
        // Return the value at the front.
        else return arr[front];
    }

    // Gets the last element of the deque. If the deque is empty, return -1.
    int getRear() {
        // If deque is empty, return -1.
        if (isEmpty()) return -1;
        // Return the value at the rear.
        else return arr[rear];
    }

    // Checks whether the deque is empty.
    bool isEmpty() {
        // If front is -1, the deque is empty.
        if (front == -1) {
            return true;
        }
        // Otherwise, the deque is not empty.
        else {
            return false;
        }
    }

    // Checks whether the deque is full.
    bool isFull() {
        // If front is just ahead of rear (circular), the deque is full.
        if (front == (rear + 1) % size) {
            return true;
        }
        // Otherwise, the deque is not full.
        else {
            return false;
        }
    }
};


// Detailed Comments: Each method now has comments explaining its purpose, parameters, and return values. Important logic sections within the methods also have comments.

// Clarity: Variable names are clear and descriptive (e.g., front, rear, size).

// Circular Logic: The modulo operator (%) is used consistently to handle wrap-around, ensuring that the deque functions correctly.
