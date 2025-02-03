#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> merge(queue<int>& a, queue<int>& b) {
    // Create an empty queue c.
    queue<int> c;

    // If a is empty, push remaining elements from b into c, and return c.
    if (a.empty()) {
        while (!b.empty()) {
            c.push(b.front());
            b.pop();
        }
        return c;
    }

    // If b is empty, push remaining elements from a into c, and return c.
    if (b.empty()) {
        while (!a.empty()) {
            c.push(a.front());
            a.pop();
        }
        return c;
    }

    // Check front values stored in the queues a and b
    while (!a.empty() && !b.empty()) {
        if (a.front() <= b.front()) {
            c.push(a.front());
            a.pop();
        }
        else {
            c.push(b.front());
            b.pop();
        }
    }

    // Push remaining elements from a or b into c.
    while (!a.empty()) {
        c.push(a.front());
        a.pop();
    }
    while (!b.empty()) {
        c.push(b.front());
        b.pop();
    }
    return c;
}

int main() {
    // Create an empty queue of queues of int xs.
    queue<queue<int>> xs;

    // Read numbers from the standard input.
    int num,n;
    cout << "Enter how many numbers you need to add\n";
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << "Enter a number\n";
        cin >> n;
        // For each number n read, create a queue x of ints, push n into the queue x, and then push x into xs.
        queue<int> x;
        string n_str = to_string(n);

        for (char digit_char : n_str) {
            int digit = digit_char - '0';
            x.push(digit);
        }
        xs.push(x);
    }

    // If xs has only one element, print elements from xs, return.
    if (xs.size() == 1) {
        queue<int> result = xs.front();
        while (!result.empty()) {
            cout << result.front() << " ";
            result.pop();
        }
        return 0;
    }

    // If not, take two first elements a and b from the front of xs and create a new queue c using the function explained above.
    while (xs.size() > 1) {
        queue<int> a = xs.front(); xs.pop();
        queue<int> b = xs.front(); xs.pop();
        queue<int> c;

        // Push c into xs.
        xs.push(merge(a, b));
    }

    // Print elements from the resulting queue.
    queue<int> result = xs.front();
    cout << "output\n";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }

    return 0;
}