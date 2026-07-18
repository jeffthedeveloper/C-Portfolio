using System;
using System.Collections.Generic;

public class NotesStore
{
    private readonly Dictionary<string, List<string>> _notes;

    public NotesStore()
    {
        _notes = new Dictionary<string, List<string>>
        {
            { "completed", new List<string>() },
            { "active", new List<string>() },
            { "others", new List<string>() }
        };
    }

    public void AddNote(string state, string name)
    {
        if (string.IsNullOrEmpty(name))
            throw new Exception("Name cannot be empty");
        
        if (!_notes.ContainsKey(state))
            throw new Exception($"Invalid state {state}");

        _notes[state].Add(name);
    }

    public List<string> GetNotes(string state)
    {
        if (!_notes.ContainsKey(state))
            throw new Exception($"Invalid state {state}");

        return _notes[state];
    }
}
