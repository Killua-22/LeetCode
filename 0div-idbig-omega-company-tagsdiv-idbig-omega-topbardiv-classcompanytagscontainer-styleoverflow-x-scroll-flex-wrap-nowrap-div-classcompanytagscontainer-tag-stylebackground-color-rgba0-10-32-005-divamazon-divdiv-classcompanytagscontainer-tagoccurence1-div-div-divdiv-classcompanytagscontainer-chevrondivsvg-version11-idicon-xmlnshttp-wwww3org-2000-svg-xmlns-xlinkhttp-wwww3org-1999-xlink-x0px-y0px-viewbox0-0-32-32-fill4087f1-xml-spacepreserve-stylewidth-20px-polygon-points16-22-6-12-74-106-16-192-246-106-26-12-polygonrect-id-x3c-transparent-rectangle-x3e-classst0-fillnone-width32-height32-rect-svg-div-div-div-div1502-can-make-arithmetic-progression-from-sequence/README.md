<h2><a href="https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">1</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1502. Can Make Arithmetic Progression From Sequence</a></h2><h3>Easy</h3><hr><div><p>A sequence of numbers is called an <strong>arithmetic progression</strong> if the difference between any two consecutive elements is the same.</p>

<p>Given an array of numbers <code>arr</code>, return <code>true</code> <em>if the array can be rearranged to form an <strong>arithmetic progression</strong>. Otherwise, return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [3,5,1]
<strong>Output:</strong> true
<strong>Explanation: </strong>We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [1,2,4]
<strong>Output:</strong> false
<strong>Explanation: </strong>There is no way to reorder the elements to obtain an arithmetic progression.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>