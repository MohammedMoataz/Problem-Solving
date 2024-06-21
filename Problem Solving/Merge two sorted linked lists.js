function mergeLists(head1, head2) {
    let mergedList = new SinglyLinkedList()

    while (head1 !== null && head2 !== null) {
        if (head1.data < head2.data) {
            mergedList.insertNode(head1.data)
            head1 = head1.next

        } else {
            mergedList.insertNode(head2.data)
            head2 = head2.next
        }
    }

    while (head1 !== null) {
        mergedList.insertNode(head1.data)
        head1 = head1.next
    }

    while (head2 !== null) {
        mergedList.insertNode(head2.data)
        head2 = head2.next
    }

    return mergedList.head
}

