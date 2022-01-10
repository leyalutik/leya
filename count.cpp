
  /**
   *  @brief Count the elements of a sequence for which a predicate is true.
   *  @ingroup non_mutating_algorithms
   *  @param  __first  An input iterator.
   *  @param  __last   An input iterator.
   *  @param  __pred   A predicate.
   *  @return   The number of iterators @c i in the range @p [__first,__last)
   *  for which @p __pred(*i) is true.
  */
  template<typename _InputIterator, typename _Predicate>
    _GLIBCXX20_CONSTEXPR
    inline typename iterator_traits<_InputIterator>::difference_type
    count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {
      // concept requirements
      __glibcxx_function_requires(_InputIteratorConcept<_InputIterator>)
      __glibcxx_function_requires(_UnaryPredicateConcept<_Predicate,
	    typename iterator_traits<_InputIterator>::value_type>)
      __glibcxx_requires_valid_range(__first, __last);

      return std::__count_if(__first, __last,
			     __gnu_cxx::__ops::__pred_iter(__pred));
    }


template<typename _Value>
    _GLIBCXX20_CONSTEXPR
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      _GLIBCXX20_CONSTEXPR
      explicit
      _Iter_equals_val(_Value& __value)
	: _M_value(__value)
      { }

      template<typename _Iterator>
	_GLIBCXX20_CONSTEXPR
	bool
	operator()(_Iterator __it)
	{ return *__it == _M_value; }
    };

template<typename _Value>
    _GLIBCXX20_CONSTEXPR
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

template<typename _InputIterator, typename _Predicate>
    _GLIBCXX20_CONSTEXPR
    typename iterator_traits<_InputIterator>::difference_type
    __count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
	if (__pred(__first))
	  ++__n;
      return __n;
    }

template<typename _Iterator, typename _Container>
    _GLIBCXX20_CONSTEXPR
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    _GLIBCXX_NOEXCEPT
    { return __lhs.base() != __rhs.base(); }

template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef std::iterator_traits<_Iterator>		__traits_type;

    public:
      typedef _Iterator					iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type  	value_type;
      typedef typename __traits_type::difference_type 	difference_type;
      typedef typename __traits_type::reference 	reference;
      typedef typename __traits_type::pointer   	pointer;

.........
	.......
	.......
	.......

      _GLIBCXX20_CONSTEXPR
      const _Iterator&
      base() const _GLIBCXX_NOEXCEPT
      { return _M_current; }
    };

 template<typename _Iterator, typename _Container>
    _GLIBCXX20_CONSTEXPR
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    _GLIBCXX_NOEXCEPT
    { return __lhs.base() != __rhs.base(); }


  template<typename _InputIterator, typename _Predicate>
    _GLIBCXX20_CONSTEXPR
    typename iterator_traits<_InputIterator>::difference_type
    __count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
	if (__pred(__first))
	  ++__n;
      return __n;
    }
