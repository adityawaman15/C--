bool isqueuefull(){
    if (qcount == max_size)
        return true;
    else
        return false;

    
}

bool isqueueempty(){
    if(qcount == 0)
        return true;
    else
        return false;
}

void enqueue(order o1){
    if(front == -1)
        front = 0;
    if(!isqueuefull()){
        rear = (rear+1)&max_size;
        order_list[rear] = i1;
        qcount++;

    }
    else{
        cout << "queue is full";
    }
}

order dequeue(){
    order temp;
    temp.order_id = -1;

    if(!isqueueempty()){
        temp = order_list[front];
        front = (front+1)%max_size;
    }
    else{
        cout <<"queue is empty";
    }
    return temp;
}

int main() {

    Queue q1;
    int choice;

    do {

        cout << "\n===== RESTAURANT =====\n";
        cout << "1. Place Order\n";
        cout << "2. Serve Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            order o;

            cout << "\nEnter Order ID: ";
            cin >> o.order_id;

            cout << "Enter Menu Item: ";
            cin >> o.menu_item;

            cout << "Enter Customer Name: ";
            cin >> o.customer_name;

            q1.enqueue(o);

            break;
        }

        case 2: {
            order o = q1.dequeue();

            if (o.order_id != -1) {
                cout << "\nServing Order\n";
                cout << "Order ID: " << o.order_id << endl;
                cout << "Menu Item: " << o.menu_item << endl;
                cout << "Customer: " << o.customer_name << endl;
            }

            break;
        }

        case 3:
            q1.display();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}