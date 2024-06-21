function CompareLists(llist1, llist2) {
    let flag = 0
    while (llist1 !== null && llist2 !== null) {
        if (llist1.data === llist2.data) {
            llist1 = llist1.next
            llist2 = llist2.next
            flag = 1
        } else {
            flag = 0
            break
        }
    }

    if (llist1 !== null || llist2 !== null)
        flag = 0

    return flag
}