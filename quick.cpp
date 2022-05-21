namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      _GLIBCXX14_CONSTEXPR
      bool operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };

_GLIBCXX14_CONSTEXPR
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }


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

#if __cplusplus > 201703L && __cpp_lib_concepts
      using iterator_concept = std::__detail::__iter_concept<_Iterator>;
#endif

      _GLIBCXX_CONSTEXPR __normal_iterator() _GLIBCXX_NOEXCEPT
      : _M_current(_Iterator()) { }

      explicit _GLIBCXX20_CONSTEXPR
      __normal_iterator(const _Iterator& __i) _GLIBCXX_NOEXCEPT
      : _M_current(__i) { }

      // Allow iterator to const_iterator conversion
      template<typename _Iter>
        _GLIBCXX20_CONSTEXPR
        __normal_iterator(const __normal_iterator<_Iter,
			  typename __enable_if<
      	       (std::__are_same<_Iter, typename _Container::pointer>::__value),
		      _Container>::__type>& __i) _GLIBCXX_NOEXCEPT
        : _M_current(__i.base()) { }

...

_GLIBCXX20_CONSTEXPR
      const _Iterator&
      base() const _GLIBCXX_NOEXCEPT
      { return _M_current; }
    };

template<typename _RandomAccessIterator>
    _GLIBCXX20_CONSTEXPR
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      // concept requirements
      __glibcxx_function_requires(_Mutable_RandomAccessIteratorConcept<
	    _RandomAccessIterator>)
      __glibcxx_function_requires(_LessThanComparableConcept<
	    typename iterator_traits<_RandomAccessIterator>::value_type>)
      __glibcxx_requires_valid_range(__first, __last);
      __glibcxx_requires_irreflexive(__first, __last);

      std::__sort(__first, __last, __gnu_cxx::__ops::__iter_less_iter());
    }



 /**
   *  @doctodo
   *  This controls some aspect of the sort routines.
  */
  enum { _S_threshold = 16 };


 // sort

    inline void
	    __sort(_RandomAccessIterator __first,
			    _RandomAccessIterator __last,_Compare __comp);
    void  __introsort_loop(_RandomAccessIterator __first,
		     _RandomAccessIterator __last,
		     _Size __depth_limit, _Compare __comp);

     void __final_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last, _Compare __comp);
     void __insertion_sort(_RandomAccessIterator __first,
		     _RandomAccessIterator __last, _Compare __comp)
  /**
   *  @brief  Convert a value to an rvalue.
   *  @param  __t  A thing of arbitrary type.
   *  @return The parameter cast to an rvalue-reference to allow moving it.
  */
  template<typename _Tp> _GLIBCXX_NODISCARD
  constexpr typename std::remove_reference<_Tp>::type&&
  move(_Tp&& __t) noexcept
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }

   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  A bidirectional iterator.
   *  @param  __last   A bidirectional iterator.
   *  @param  __result A bidirectional iterator.
   *  @return   result - (last - first)
   *
   *  The function has the same effect as move, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range (first,last].  Use move instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    _GLIBCXX20_CONSTEXPR
    inline _BI2 move_backward(_BI1 __first, _BI1 __last, _BI2 __result);

   template<bool _IsMove, typename _II, typename _OI> _GLIBCXX20_CONSTEXPR
    inline _OI __copy_move_backward_a(_II __first, _II __last, _OI __result);
   


   //=========================================

template<typename _RandomAccessIterator, typename _Compare>
    _GLIBCXX20_CONSTEXPR
    inline void
    __sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
	   _Compare __comp)
    {
      if (__first != __last)
	{
	  std::__introsort_loop(__first, __last,std::__lg(__last - __first) * 2, __comp);
	  std::__final_insertion_sort(__first, __last, __comp);
	}
    }
/// This is a helper function for the sort routine.
  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    _GLIBCXX20_CONSTEXPR
    void
    __introsort_loop(_RandomAccessIterator __first,
		     _RandomAccessIterator __last,
		     _Size __depth_limit, _Compare __comp)
    {
      while (__last - __first > int(_S_threshold))
	{
	  if (__depth_limit == 0)
	    {
	      std::__partial_sort(__first, __last, __last, __comp);
	      return;
	    }
	  --__depth_limit;
	  _RandomAccessIterator __cut =
	    std::__unguarded_partition_pivot(__first, __last, __comp);
	  std::__introsort_loop(__cut, __last, __depth_limit, __comp);
	  __last = __cut;
	}
    }
 /// This is a helper function for the sort routine.
  template<typename _RandomAccessIterator, typename _Compare>
    _GLIBCXX20_CONSTEXPR
    void
    __final_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first > int(_S_threshold))
	{
	  std::__insertion_sort(__first, __first + int(_S_threshold), __comp);
	  std::__unguarded_insertion_sort(__first + int(_S_threshold), __last,
					  __comp);
	}
      else
	std::__insertion_sort(__first, __last, __comp);
    }
 /// This is a helper function for the sort routine.
  template<typename _RandomAccessIterator, typename _Compare>
    _GLIBCXX20_CONSTEXPR
    void
    __insertion_sort(_RandomAccessIterator __first,
		     _RandomAccessIterator __last, _Compare __comp)
    {
      if (__first == __last) return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
	{
	  if (__comp(__i, __first))
	    {
	      typename iterator_traits<_RandomAccessIterator>::value_type
		__val = _GLIBCXX_MOVE(*__i);
	      _GLIBCXX_MOVE_BACKWARD3(__first, __i, __i + 1);
	      *__first = _GLIBCXX_MOVE(__val);
	    }
	  else
	    std::__unguarded_linear_insert(__i,
				__gnu_cxx::__ops::__val_comp_iter(__comp));
	}
    }

 /**
   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  A bidirectional iterator.
   *  @param  __last   A bidirectional iterator.
   *  @param  __result A bidirectional iterator.
   *  @return   result - (last - first)
   *
   *  The function has the same effect as move, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range (first,last].  Use move instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    _GLIBCXX20_CONSTEXPR
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
      __glibcxx_function_requires(_BidirectionalIteratorConcept<_BI1>)
      __glibcxx_function_requires(_Mutable_BidirectionalIteratorConcept<_BI2>)
      __glibcxx_function_requires(_ConvertibleConcept<
	    typename iterator_traits<_BI1>::value_type,
	    typename iterator_traits<_BI2>::value_type>)
      __glibcxx_requires_can_decrement_range(__first, __last, __result);

      return std::__copy_move_backward_a<true>(std::__miter_base(__first),
					       std::__miter_base(__last),
					       __result);
    }


 template<bool _IsMove, typename _II, typename _OI>
    _GLIBCXX20_CONSTEXPR
    inline _OI
    __copy_move_backward_a(_II __first, _II __last, _OI __result)
    {
      return std::__niter_wrap(__result,
		std::__copy_move_backward_a1<_IsMove>
		  (std::__niter_base(__first), std::__niter_base(__last),
		   std::__niter_base(__result)));
    }


