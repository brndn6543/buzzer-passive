# buzzer-passive
A demonstration of generating a major scale using a passive buzzer with an Arduino UNO board. Watch the demonstration below on YouTube.

**Do not forget to turn your audio up.**

[![Watch on YouTube](https://i9.ytimg.com/vi/AVXv1P7u4dE/mqdefault.jpg?sqp=CLDDxMAG-oaymwEmCMACELQB8quKqQMa8AEB-AH-CYAC0AWKAgwIABABGGUgTyhKMA8=&rs=AOn4CLBybtWbFfoYpewYuod2ZE0wQSxkTA)](https://youtu.be/AVXv1P7u4dE)

Passive buzzers use PWM generating audio to make the air vibrate. The following frequencies relate to the notes of the major scale:

- Do `523Hz`
- Re `587Hz`
- Mi `659Hz`
- Fa `784Hz`
- So `784Hz`
- La `880Hz`
- Si `988Hz`

The octave is produced at `1047Hz`. The `pitches` header file is simply a list of constants containing the frequency of tones and their cooresponding frequency.