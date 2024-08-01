long long multiplyTwoLists(Node *first, Node *second) {
    long long no1 = 0, no2 = 0;
    const long long MOD = 1000000007; // Modulo to prevent overflow

    Node *temp = first;
    while (temp) {
        no1 = (no1 * 10 + temp->data) % MOD;
        temp = temp->next;
    }

    temp = second;
    while (temp) {
        no2 = (no2 * 10 + temp->data) % MOD;
        temp = temp->next;
    }

    return (no1 * no2) % MOD;
}
