public static List<Integer> matchingStrings(List<String> strings, List<String> queries) {
    List<Integer> result = new ArrayList();

    for (String query : queries) {
        int counter = 0;
        for (int i = 0; i < strings.size(); i++) {
            if (query.equals(strings.get(i))) {
                counter++;
            }
        }
        result.add(counter);
    }

    return result;
}