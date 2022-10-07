// Linked list operations in Java
/*
1. Insert at the beginning
2. Insert after a node 
3. Insert at the end 
4. Delete a node by position
5. Search a node
6. Sort the linked list
7. Print the linked list
 */

class Singly_LinkedList {
    Node head;

    // Create a node
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            next = null;
        }
    }

    // Insert at the beginning
    public void insertAtBeginning(int new_data) {
        
        Node new_node = new Node(new_data);     // Creating a node & inserting the data
        new_node.next = head;                   //pointing next of new_node to original head
        head = new_node;                        // pointing head to new_node created above
    }


    // Insert after a node
    public void insertAfter(Node prev_node, int new_data) {
        if (prev_node == null) {                                              //checking whether prev_node exists or not
            System.out.println("The given previous node cannot be null");
            return;
        }
        Node new_node = new Node(new_data);                                   //changing pointers and attaching accordingly
        new_node.next = prev_node.next;
        prev_node.next = new_node;
    }

    // Insert at the end
    public void insertAtEnd(int new_data) {
        Node new_node = new Node(new_data);

        if (head == null) {                       //checking whether head of LL exists or not
            head = new Node(new_data);            //if head does not exist, new_data node will be its new head
            return;
        }

        new_node.next = null;

        Node last = head;
        while (last.next != null)
            last = last.next;

        last.next = new_node;
        return;
    }

    // Delete a node
    void deleteNode(int position) {
        if (head == null)
            return;

        Node temp = head;

        if (position == 0) {
            head = temp.next;
            return;
        }
        // Find the key to be deleted
        for (int i = 0; temp != null && i < position - 1; i++)
            temp = temp.next;

        // If the key is not present
        if (temp == null || temp.next == null)
            return;

        // Remove the node
        Node next = temp.next.next;

        temp.next = next;
    }

    // Search a node
    boolean search(Node head, int key) {
        Node current = head;
        while (current != null) {
            if (current.data == key)
                return true;
            current = current.next;
        }
        return false;
    }

    // Sort the linked list
    void sortLinkedList(Node head) {
        Node current = head;
        Node index = null;
        int temp;

        if (head == null) {
            return;
        } else {
            while (current != null) {
                // index points to the node next to current
                index = current.next;

                while (index != null) {
                    if (current.data > index.data) {
                        temp = current.data;
                        current.data = index.data;
                        index.data = temp;
                    }
                    index = index.next;
                }
                current = current.next;
            }
        }
    }

    // Print the linked list
    public void printList() {
        Node tnode = head;
        while (tnode != null) {
            System.out.print(tnode.data + " ");
            tnode = tnode.next;
        }

    }

    public static void main(String[] args) {
        Singly_LinkedList llist = new Singly_LinkedList();

        llist.insertAtEnd(1);                           //1. Insert at the beginning
        llist.insertAtBeginning(2);                     
        llist.insertAtBeginning(3);
        llist.insertAtEnd(4);                           //3. Insert at the end
        llist.insertAfter(llist.head.next, 5);          //2. Insert after a node 

        System.out.println("Linked list: ");                   
        llist.printList();
        // o/p: 3 2 5 1 4

        System.out.println("\nAfter deleting an element: ");
        llist.deleteNode(3);                            // 4. Delete a node by position
        llist.printList();
        // o/p: 3 2 5 4

        System.out.println("\n");                              //5. Search a node
        int item_to_find = 3;
        if (llist.search(llist.head, item_to_find))
            System.out.println(item_to_find + " is found");
        else
            System.out.println(item_to_find + " is not found");
        // o/p: 3 is found

        llist.sortLinkedList(llist.head);                         //6. Sort the linked list
        System.out.println("\nSorted List: ");
        llist.printList();                                        //7. Print the linked list
        // o/p: 2 3 4 5

    }
}