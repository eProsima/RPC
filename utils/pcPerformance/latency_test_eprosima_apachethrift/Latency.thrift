struct element
{
    1 : bool att1
    2 : string att2
    3 : i32 att3
    4 : i16 att4
    5 : bool att5
}

typedef list<element> st

service LatencyTest {
	st latency(1:st param)
}
