#include <stdio.h> 
#include <stdlib.h> 
struct Employee {
int empID;
char name[50];
struct Employee* prev; 
struct Employee* next;
};
struct Employee* createEmployee(int empID, const char* name) {
struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee)); 
newEmployee->empID = empID;
strcpy(newEmployee->name, name); 
newEmployee->prev = NULL; 
newEmployee->next = NULL;
return newEmployee;
}
void insertAtFront(struct Employee** head, int empID, const char* name) { 
struct Employee* newEmployee = createEmployee(empID, name);
if (*head == NULL) {
*head = newEmployee;
} else {
newEmployee->next = *head; 
(*head)->prev = newEmployee;
*head = newEmployee;
}
}
void deleteAtEnd(struct Employee** head) { 
if (*head == NULL) {
printf("List is empty. Nothing to delete.\n"); 
return;
}
if ((*head)->next == NULL) { 
free(*head);
*head = NULL; 
return;
}
struct Employee* current = *head; 
while (current->next != NULL) {
    current = current->next;
}
current->prev->next = NULL; 
free(current);
}
void printForward(struct Employee* head) { 
struct Employee* current = head;
printf("NULL <-> ");
while (current != NULL) {
printf("Employee ID: %d, Name: %s <-> ", current->empID, current->name); 
current = current->next;
}
printf("NULL \n");
}
int main() {
struct Employee* head = NULL;
insertAtFront(&head, 101, "Ram");
insertAtFront(&head, 102, "Bob");
insertAtFront(&head, 103, "Raj");
printf("Doubly Linked List:\n"); 
printForward(head); 
deleteAtEnd(&head);
printf("\nDoubly Linked List after deletion:\n"); 
printForward(head);
return 0;