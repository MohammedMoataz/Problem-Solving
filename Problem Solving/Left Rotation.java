public static List<Integer> rotateLeft(int d, List<Integer> arr) {
    List<Integer> queue = arr;
    for (int i = 0; i < d; i++) {
        int e = (int) queue.remove(0);
        queue.add(e);
    }

    return queue;
}