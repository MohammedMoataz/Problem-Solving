static boolean hasCycle(SinglyLinkedListNode head) {
    int count = 0;

    if (head == null) {
        return false;

    } else {
        while (head.next != null) {
            head = head.next;

            if (++count == 1000)
                return true;
        }

        return false;
    }

}
