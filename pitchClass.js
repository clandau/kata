  //find the pitch number with the note input
  
  function pitchClass(note){
  var noteMap = { "C":0, "D":2, "E":4, "F":5, "G":7, "A":9, "B":11};
  var noteInput = note.toUpperCase();
  if (noteMap[noteInput] >= 0) {return noteMap[noteInput];}
  else if (noteInput.length == 2) {
    var split = noteInput.split("");
    if (split[1] == "#") {
      return ((noteMap[split[0]] + 1)+12)%12;
    }
    else if(split[1] == "B") {
      return((noteMap[split[0]]-1)+12)%12;
    }
  }
  return null;
}