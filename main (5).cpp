#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Comparison function for sorting in descending order by CGPA
bool compareStudentsByCGPA(const Student& student1, const Student& student2) {
    return student1.cgpa > student2.cgpa;
}

void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareStudentsByCGPA);
}

int main() {
    // Example usage:
    std::vector<Student> student_list;

    // Populate the list with sample student objects
    student_list.push_back({"Alice", "001", 3.7});
    student_list.push_back({"Bob", "002", 3.9});
    student_list.push_back({"Charlie", "003", 3.5});
    student_list.push_back({"David", "004", 4.0});

    // Sort the list of students by CGPA
    sort_students(student_list);

    // Print the sorted list
    std::cout << "Sorted Student List (by CGPA in descending order):\n";
    for (const Student& student : student_list) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}
