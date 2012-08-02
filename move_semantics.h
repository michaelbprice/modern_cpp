#ifndef MOVE_SEMANTICS_H__
#define MOVE_SEMANTICS_H__

#ifndef WIN32
namespace std {

template <class InputIterator, class OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result);

} // namespace std
#endif // WIN32


class MoveableBuffer
{
 public:
    MoveableBuffer () { buf = new char[256]; }

    ~MoveableBuffer () { delete[] buf; }

    MoveableBuffer (const MoveableBuffer & other)
    {
        buf = new char[256];
        std::copy(buf, buf + 256, other.buf);
    }

    MoveableBuffer(MoveableBuffer && other)
    {
        buf = other.buf;
        other.buf = nullptr;
    }

 private:
    char * buf;
};


#endif /* end of include guard: MOVE_SEMANTICS_H__ */