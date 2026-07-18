using System;
using System.Collections.Generic;
using System.Linq;

namespace Solution
{
    public class Employee
    {
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public int Age { get; set; }
        public string Company { get; set; }
    }

    public class EmployeeProcessor
    {
        public static Dictionary<string, int> AverageAgeForEachCompany(List<Employee> employees)
        {
            return employees
                .GroupBy(e => e.Company)
                .OrderBy(g => g.Key)
                .ToDictionary(g => g.Key, g => (int)Math.Round(g.Average(e => e.Age)));
        }
        
        public static Dictionary<string, int> CountOfEmployeesForEachCompany(List<Employee> employees)
        {
            return employees
                .GroupBy(e => e.Company)
                .OrderBy(g => g.Key)
                .ToDictionary(g => g.Key, g => g.Count());
        }
        
        public static Dictionary<string, Employee> OldestAgeForEachCompany(List<Employee> employees)
        {
            return employees
                .GroupBy(e => e.Company)
                .OrderBy(g => g.Key)
                .ToDictionary(g => g.Key, g => g.OrderByDescending(e => e.Age).First());
        }
    }
}
