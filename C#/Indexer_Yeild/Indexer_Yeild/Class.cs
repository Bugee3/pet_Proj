using System.Collections;
using System.Runtime.Serialization;

namespace Indexer_Yeild;
// [Serializable]
[DataContract]
public class Class : IEnumerable<Students>
{
    [DataMember]
    public List<Students> StudentsList = new List<Students>();
    [DataMember]
    public string Name { get; set; }
    [DataMember]
    public int ID { get; set; }
    
    public Students this[string firstname]
    {
        get
        {
            var student = StudentsList.FirstOrDefault(x => x.FirstName1 == firstname);
            return student;
        }
    }

    public void Expulsion(string firstname)
    {
        var student = StudentsList.FirstOrDefault(x => x.FirstName1 == firstname);
        if (student != null)
        {
            StudentsList.Remove(student);
        }
    }

    IEnumerator<Students> IEnumerable<Students>.GetEnumerator()
    {
        foreach (var student in StudentsList)
        {
            yield return student;
        }
    }


    public IEnumerable GetNames()
    {
        foreach (var student in StudentsList)
        {
            yield return student.FirstName1;
        }
    }

    public IEnumerator GetEnumerator()
    {
        foreach (var student in StudentsList)
        {
            yield return student;
        }
    }
}

public class ClassEnumerator : IEnumerator<Students>
{
    private Students _current;

    public bool MoveNext()
    {
        throw new NotImplementedException();
    }

    public void Reset()
    {
        throw new NotImplementedException();
    }

    Students IEnumerator<Students>.Current => _current;

    public object Current => throw new NotImplementedException();
    public void Dispose()
    {
        throw new NotImplementedException();
    }
}