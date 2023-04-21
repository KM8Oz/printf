<div class="panel panel-default" id="project-description">
    <div class="panel-body">
        <h2>Background Context</h2>
        <p>Write your own <code>printf</code> function.</p>
        <p><img
                src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/228/printf.png">
        </p>
        <p><em>^ In this picture, <a href="/rltoken/pSPZEmqi5O8ZoeLM5-65WA" title="Kris" target="_blank">Kris</a>, and
                <a href="/rltoken/X_vDffLlUpbtqnubfnQx8Q" title="Jul" target="_blank">Jul</a></em></p>
        <h2>Resources</h2>
        <p><strong>Read or watch</strong>:</p>
        <ul>
            <li><a href="/rltoken/7Vw7aUWgwC7JYUrqI4bh4Q" title="Secrets of printf" target="_blank">Secrets of
                    printf</a> </li>
            <li><strong>Group Projects</strong> concept page (<em>Don’t forget to read this</em>)</li>
            <li><strong>Flowcharts</strong> concept page</li>
        </ul>
        <p><strong>man or help</strong>:</p>
        <ul>
            <li><code>printf (3)</code></li>
        </ul>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
            <li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options
                <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
            <li>All your files should end with a new line</li>
            <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
            <li>Your code should use the <code>Betty</code> style. It will be checked using <a
                    href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl"
                    target="_blank">betty-style.pl</a> and <a
                    href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl"
                    target="_blank">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test
                your functions, but you don’t have to push them to your repo (if you do we won’t take them into
                account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files
                might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions should be included in your header file called <code>main.h</code>
            </li>
            <li>Don’t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
            <li>Note that we will not provide the <code>_putchar</code> function for this project</li>
        </ul>
        <h3>GitHub</h3>
        <p><strong>There should be one project repository per group. The other members do not fork or clone the project
                to ensure only one of the team has the repository in their github account otherwise you risk scoring
                0%</strong></p>
        <h2>More Info</h2>
        <h3>Authorized functions and macros</h3>
        <ul>
            <li><code>write</code> (<code>man 2 write</code>)</li>
            <li><code>malloc</code> (<code>man 3 malloc</code>)</li>
            <li><code>free</code> (<code>man 3 free</code>)</li>
            <li><code>va_start</code> (<code>man 3 va_start</code>)</li>
            <li><code>va_end</code> (<code>man 3 va_end</code>)</li>
            <li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
            <li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
        </ul>
        <h3>Compilation</h3>
        <ul>
            <li>Your code will be compiled this way:</li>
        </ul>
        <pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
</code></pre>
        <ul>
            <li>As a consequence, be careful not to push any c file containing a <code>main</code> function in the root
                directory of your project (you could have a <code>test</code> folder containing all your tests files
                including <code>main</code> functions)</li>
            <li>Our main files will include your main header file (<code>main.h</code>): <code>#include main.h</code>
            </li>
            <li>You might want to look at the gcc flag <code>-Wno-format</code> when testing with your
                <code>_printf</code> and the standard <code>printf</code>. Example of test file that you could use:</li>
</ul>
<pre><code>alex@ubuntu:~/c/printf$ cat main.c 
#include &lt;limits.h&gt;
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
</code></pre>
        <ul>
            <li>We strongly encourage you to work all together on a set of tests</li>
            <li>If the task does not specify what to do with an edge case, do the same as <code>printf</code></li>
        </ul>
        <h3>Copyright - Plagiarism</h3>
        <ul>
            <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning
                objectives.</li>
            <li>You will not be able to meet the objectives of this or any following project by copying and pasting
                someone else’s work. </li>
            <li>You are not allowed to publish any content of this project.</li>
            <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
        </ul>
    </div>
</div>
<div>
<ul>
<h2><strong>
Team Members:
</strong></h2>
<li>
<code>@KM8Oz</code>
</li>
<li>
<code>@Schatz03</code>
</li>
</ul>
</div>