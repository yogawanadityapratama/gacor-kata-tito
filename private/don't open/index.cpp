#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int age;
    std::string rollNumber;

public:
    Student(const std::string& n, int a, const std::string& roll) : name(n), age(a), rollNumber(roll) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << std::endl;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getRollNumber() const {
        return rollNumber;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setRollNumber(const std::string& newRoll) {
        rollNumber = newRoll;
    }
};

class StudentDatabase {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }

    void updateStudent(const std::string& rollNumber, const Student& updatedStudent) {
        auto it = std::find_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        });

        if (it != students.end()) {
            it->setName(updatedStudent.getName());
            it->setAge(updatedStudent.getAge());
            it->setRollNumber(updatedStudent.getRollNumber());
        } else {
            std::cout << "Student with Roll Number " << rollNumber << " not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        students.erase(std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
            return s.getRollNumber() == rollNumber;
        }), students.end());
    }
};

int main() {
    StudentDatabase database;

    Student student1("John", 20, "123");
    Student student2("Jane", 22, "456");

    // Create
    database.addStudent(student1);
    database.addStudent(student2);

    // Read
    std::cout << "All Students:" << std::endl;
    database.displayAllStudents();

    // Update
    Student updatedStudent("Jane Doe", 23, "456");
    database.updateStudent("456", updatedStudent);

    // Read after update
    std::cout << "\nAll Students after Update:" << std::endl;
    database.displayAllStudents();

    // Delete
    database.deleteStudent("123");

    // Read after delete
    std::cout << "\nAll Students after Delete:" << std::endl;
    database.displayAllStudents();

    return 0;
}