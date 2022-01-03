
bool search(node *head, int Key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == Key)
        {
            return true;
            temp = temp->next;
        }
        return false;
        temp = temp->next;
    }
}