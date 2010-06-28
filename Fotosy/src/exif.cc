
  
  

  


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>src/exif.cc at 822a8181d24165ad0c110b5d466065a80fcc7a0d from ollix's qmeta - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="http://github.com/fluidicon.png" title="GitHub" />

    <link href="http://assets3.github.com/stylesheets/bundle_common.css?943fe5b66ca533004a921a83178f661ea31c13c0" media="screen" rel="stylesheet" type="text/css" />
<link href="http://assets3.github.com/stylesheets/bundle_github.css?943fe5b66ca533004a921a83178f661ea31c13c0" media="screen" rel="stylesheet" type="text/css" />

    <script type="text/javascript" charset="utf-8">
      var GitHub = {}
      var github_user = null
      
    </script>
    <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js" type="text/javascript"></script>
    <script src="http://assets1.github.com/javascripts/bundle_common.js?943fe5b66ca533004a921a83178f661ea31c13c0" type="text/javascript"></script>
<script src="http://assets2.github.com/javascripts/bundle_github.js?943fe5b66ca533004a921a83178f661ea31c13c0" type="text/javascript"></script>

        <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "ollix/qmeta"
      })
    </script>

    
  
    
  

  <link href="http://github.com/ollix/qmeta/commits/822a8181d24165ad0c110b5d466065a80fcc7a0d.atom" rel="alternate" title="Recent Commits to qmeta:822a8181d24165ad0c110b5d466065a80fcc7a0d" type="application/atom+xml" />

    <META NAME="ROBOTS" CONTENT="NOINDEX, FOLLOW">    <meta name="description" content="A library to manipulate image metadata based on Qt." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "ollix/qmeta";
      GitHub.currentRef = "";
    </script>
  

            <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_trackPageview']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

  </head>

  

  <body>
    

    
      <script type="text/javascript">
        var _kmq = _kmq || [];
        (function(){function _kms(u,d){if(navigator.appName.indexOf("Microsoft")==0 && d)document.write("<scr"+"ipt defer='defer' async='true' src='"+u+"'></scr"+"ipt>");else{var s=document.createElement('script');s.type='text/javascript';s.async=true;s.src=u;(document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(s);}}_kms('https://i.kissmetrics.com/i.js');_kms('http'+('https:'==document.location.protocol ? 's://s3.amazonaws.com/' : '://')+'scripts.kissmetrics.com/406e8bf3a2b8846ead55afb3cfaf6664523e3a54.1.js',1);})();
      </script>
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="pageheaded">
        <div class="site">
          <div class="logo">
            <a href="http://github.com"><img src="/images/modules/header/logov3.png" alt="github" /></a>
          </div>
          
          <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <input type="search" class="search my_repos_autocompleter" name="q" results="5" placeholder="Search&hellip;" /> <input type="submit" value="Search" class="button" />
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
  
  
    <ul class="nav logged_out">
      
        <li><a href="http://github.com">Home</a></li>
        <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
        <li><a href="http://github.com/explore">Explore GitHub</a></li>
        
        <li><a href="/blog">Blog</a></li>
      
      <li><a href="https://github.com/login">Login</a></li>
    </ul>
  
</div>

        </div>
      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public   ">
        <h1>
          <a href="/ollix">ollix</a> / <strong><a href="http://github.com/ollix/qmeta">qmeta</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="https://github.com/ollix/qmeta/edit" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/ollix/qmeta/toggle_watch" class="minibutton btn-watch " id="watch_button" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/ollix/qmeta/toggle_watch" class="minibutton btn-watch " id="unwatch_button" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/ollix/qmeta/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'e462204c4567a596cfe84faade56d376be913e51'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
          <li id="pull_request_item" class='ospr' style="display:none"><a href="/ollix/qmeta/pull_request/" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
          

          <li><a href="#" class="minibutton btn-download " id="download_button"><span><span class="icon"></span>Download Source</span></a></li>
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/ollix/qmeta/watchers" title="Watchers" class="tooltipped downwards">2</a></li>
          <li class="forks"><a href="/ollix/qmeta/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>


        
  <ul class="tabs">
    <li><a href="http://github.com/ollix/qmeta/tree/" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="http://github.com/ollix/qmeta/commits/" highlight="repo_commits">Commits</a></li>

    
    <li><a href="/ollix/qmeta/network" highlight="repo_network">Network (1)</a></li>

    

    
      
      <li><a href="/ollix/qmeta/issues" highlight="issues">Issues (0)</a></li>
    

    
      
      <li><a href="/ollix/qmeta/downloads">Downloads (0)</a></li>
    

    
      
      <li><a href="http://wiki.github.com/ollix/qmeta/">Wiki (1)</a></li>
    

    <li><a href="/ollix/qmeta/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards tooltipped" title="822a8181d24165ad0c110b5d466065a80fcc7a0d">
        <em>Tree:</em>
        <code>822a818</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="#" class="dropdown">Switch Branches (1)</a>
      <ul>
        
          
          
            <li><a href="/ollix/qmeta/blob/master/src/exif.cc" action="show">master</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/ollix/qmeta/branches/master" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  


        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <div class="pledgie">
          <a href='http://pledgie.com/campaigns/8475'><img alt='Click here to lend your support to: qmeta and make a donation at www.pledgie.com !' src='http://www.pledgie.com/campaigns/8475.png?skin_name=chrome' border='0' /></a>
        </div>
      

      <div id="repository_description" rel="repository_description_edit">
        
          <p>A library to manipulate image metadata based on Qt.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>
      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/ollix/qmeta/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="e462204c4567a596cfe84faade56d376be913e51" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="A library to manipulate image metadata based on Qt.">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://" rel="nofollow"></a></p>
      </div>
      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/ollix/qmeta/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="e462204c4567a596cfe84faade56d376be913e51" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      <div class="rule "></div>

      <div id="url_box" class="url-box">
        <ul class="clone-urls">
          
            
            <li id="http_clone_url"><a href="http://github.com/ollix/qmeta.git" data-permissions="Read-Only">HTTP</a></li>
            <li id="public_clone_url"><a href="git://github.com/ollix/qmeta.git" data-permissions="Read-Only">Git Read-Only</a></li>
          
        </ul>
        <input type="text" spellcheck="false" id="url_field" class="url-field" />
              <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets1.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets1.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

        <p id="url_description">This URL has <strong>Read+Write</strong> access</p>
      </div>
    </div>


        

      </div><!-- /.pagehead -->

      









<script type="text/javascript">
  GitHub.currentCommitRef = "822a8181d24165ad0c110b5d466065a80fcc7a0d"
  GitHub.currentRepoOwner = "ollix"
  GitHub.currentRepo = "qmeta"
  GitHub.downloadRepo = '/ollix/qmeta/archives/822a8181d24165ad0c110b5d466065a80fcc7a0d'

  

  
</script>










  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/ollix/qmeta/commit/822a8181d24165ad0c110b5d466065a80fcc7a0d">Drops QtGui support in CMakeLists.txt.</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="http://www.gravatar.com/avatar/a8be03049f6c5fe81fd2e33a697c43ec?s=140&d=http%3A%2F%2Fgithub.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/olliwang">olliwang</a> <span>(author)</span></div>
        <div class="date">
          <abbr class="relatize" title="2010-04-03 00:18:45">Sat Apr 03 00:18:45 -0700 2010</abbr>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/ollix/qmeta/commit/822a8181d24165ad0c110b5d466065a80fcc7a0d" hotkey="c">822a8181d24165ad0c11</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d" hotkey="t">b78f43e019ed48713341</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/ollix/qmeta/tree/cf7e42e9d1808fad9971f1b010adf926ac5b525d" hotkey="p">cf7e42e9d1808fad9971</a>
      

    </div>
  </div>

    </div>
  </div>



  
    <div id="path">
      <b><a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d">qmeta</a></b> / <a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d/src">src</a> / exif.cc       <span style="display:none" id="clippy_1180">src/exif.cc</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets1.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_1180&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets1.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_1180&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div id="files">
      <div class="file">
        <div class="meta">
          <div class="info">
            <span class="icon"><img alt="Txt" height="16" src="http://assets2.github.com/images/icons/txt.png?943fe5b66ca533004a921a83178f661ea31c13c0" width="16" /></span>
            <span class="mode" title="File Mode">100644</span>
            
              <span>240 lines (223 sloc)</span>
            
            <span>10.88 kb</span>
          </div>
          <ul class="actions">
            
              <li><a id="file-edit-link" href="#" rel="/ollix/qmeta/file-edit/__ref__/src/exif.cc">edit</a></li>
            
            <li><a href="/ollix/qmeta/raw/822a8181d24165ad0c110b5d466065a80fcc7a0d/src/exif.cc" id="raw-url">raw</a></li>
            
              <li><a href="/ollix/qmeta/blame/822a8181d24165ad0c110b5d466065a80fcc7a0d/src/exif.cc">blame</a></li>
            
            <li><a href="/ollix/qmeta/commits/master/src/exif.cc">history</a></li>
          </ul>
        </div>
        
  <div class="data syntax type-cpp">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="LID1" rel="#L1">1</span>
<span id="LID2" rel="#L2">2</span>
<span id="LID3" rel="#L3">3</span>
<span id="LID4" rel="#L4">4</span>
<span id="LID5" rel="#L5">5</span>
<span id="LID6" rel="#L6">6</span>
<span id="LID7" rel="#L7">7</span>
<span id="LID8" rel="#L8">8</span>
<span id="LID9" rel="#L9">9</span>
<span id="LID10" rel="#L10">10</span>
<span id="LID11" rel="#L11">11</span>
<span id="LID12" rel="#L12">12</span>
<span id="LID13" rel="#L13">13</span>
<span id="LID14" rel="#L14">14</span>
<span id="LID15" rel="#L15">15</span>
<span id="LID16" rel="#L16">16</span>
<span id="LID17" rel="#L17">17</span>
<span id="LID18" rel="#L18">18</span>
<span id="LID19" rel="#L19">19</span>
<span id="LID20" rel="#L20">20</span>
<span id="LID21" rel="#L21">21</span>
<span id="LID22" rel="#L22">22</span>
<span id="LID23" rel="#L23">23</span>
<span id="LID24" rel="#L24">24</span>
<span id="LID25" rel="#L25">25</span>
<span id="LID26" rel="#L26">26</span>
<span id="LID27" rel="#L27">27</span>
<span id="LID28" rel="#L28">28</span>
<span id="LID29" rel="#L29">29</span>
<span id="LID30" rel="#L30">30</span>
<span id="LID31" rel="#L31">31</span>
<span id="LID32" rel="#L32">32</span>
<span id="LID33" rel="#L33">33</span>
<span id="LID34" rel="#L34">34</span>
<span id="LID35" rel="#L35">35</span>
<span id="LID36" rel="#L36">36</span>
<span id="LID37" rel="#L37">37</span>
<span id="LID38" rel="#L38">38</span>
<span id="LID39" rel="#L39">39</span>
<span id="LID40" rel="#L40">40</span>
<span id="LID41" rel="#L41">41</span>
<span id="LID42" rel="#L42">42</span>
<span id="LID43" rel="#L43">43</span>
<span id="LID44" rel="#L44">44</span>
<span id="LID45" rel="#L45">45</span>
<span id="LID46" rel="#L46">46</span>
<span id="LID47" rel="#L47">47</span>
<span id="LID48" rel="#L48">48</span>
<span id="LID49" rel="#L49">49</span>
<span id="LID50" rel="#L50">50</span>
<span id="LID51" rel="#L51">51</span>
<span id="LID52" rel="#L52">52</span>
<span id="LID53" rel="#L53">53</span>
<span id="LID54" rel="#L54">54</span>
<span id="LID55" rel="#L55">55</span>
<span id="LID56" rel="#L56">56</span>
<span id="LID57" rel="#L57">57</span>
<span id="LID58" rel="#L58">58</span>
<span id="LID59" rel="#L59">59</span>
<span id="LID60" rel="#L60">60</span>
<span id="LID61" rel="#L61">61</span>
<span id="LID62" rel="#L62">62</span>
<span id="LID63" rel="#L63">63</span>
<span id="LID64" rel="#L64">64</span>
<span id="LID65" rel="#L65">65</span>
<span id="LID66" rel="#L66">66</span>
<span id="LID67" rel="#L67">67</span>
<span id="LID68" rel="#L68">68</span>
<span id="LID69" rel="#L69">69</span>
<span id="LID70" rel="#L70">70</span>
<span id="LID71" rel="#L71">71</span>
<span id="LID72" rel="#L72">72</span>
<span id="LID73" rel="#L73">73</span>
<span id="LID74" rel="#L74">74</span>
<span id="LID75" rel="#L75">75</span>
<span id="LID76" rel="#L76">76</span>
<span id="LID77" rel="#L77">77</span>
<span id="LID78" rel="#L78">78</span>
<span id="LID79" rel="#L79">79</span>
<span id="LID80" rel="#L80">80</span>
<span id="LID81" rel="#L81">81</span>
<span id="LID82" rel="#L82">82</span>
<span id="LID83" rel="#L83">83</span>
<span id="LID84" rel="#L84">84</span>
<span id="LID85" rel="#L85">85</span>
<span id="LID86" rel="#L86">86</span>
<span id="LID87" rel="#L87">87</span>
<span id="LID88" rel="#L88">88</span>
<span id="LID89" rel="#L89">89</span>
<span id="LID90" rel="#L90">90</span>
<span id="LID91" rel="#L91">91</span>
<span id="LID92" rel="#L92">92</span>
<span id="LID93" rel="#L93">93</span>
<span id="LID94" rel="#L94">94</span>
<span id="LID95" rel="#L95">95</span>
<span id="LID96" rel="#L96">96</span>
<span id="LID97" rel="#L97">97</span>
<span id="LID98" rel="#L98">98</span>
<span id="LID99" rel="#L99">99</span>
<span id="LID100" rel="#L100">100</span>
<span id="LID101" rel="#L101">101</span>
<span id="LID102" rel="#L102">102</span>
<span id="LID103" rel="#L103">103</span>
<span id="LID104" rel="#L104">104</span>
<span id="LID105" rel="#L105">105</span>
<span id="LID106" rel="#L106">106</span>
<span id="LID107" rel="#L107">107</span>
<span id="LID108" rel="#L108">108</span>
<span id="LID109" rel="#L109">109</span>
<span id="LID110" rel="#L110">110</span>
<span id="LID111" rel="#L111">111</span>
<span id="LID112" rel="#L112">112</span>
<span id="LID113" rel="#L113">113</span>
<span id="LID114" rel="#L114">114</span>
<span id="LID115" rel="#L115">115</span>
<span id="LID116" rel="#L116">116</span>
<span id="LID117" rel="#L117">117</span>
<span id="LID118" rel="#L118">118</span>
<span id="LID119" rel="#L119">119</span>
<span id="LID120" rel="#L120">120</span>
<span id="LID121" rel="#L121">121</span>
<span id="LID122" rel="#L122">122</span>
<span id="LID123" rel="#L123">123</span>
<span id="LID124" rel="#L124">124</span>
<span id="LID125" rel="#L125">125</span>
<span id="LID126" rel="#L126">126</span>
<span id="LID127" rel="#L127">127</span>
<span id="LID128" rel="#L128">128</span>
<span id="LID129" rel="#L129">129</span>
<span id="LID130" rel="#L130">130</span>
<span id="LID131" rel="#L131">131</span>
<span id="LID132" rel="#L132">132</span>
<span id="LID133" rel="#L133">133</span>
<span id="LID134" rel="#L134">134</span>
<span id="LID135" rel="#L135">135</span>
<span id="LID136" rel="#L136">136</span>
<span id="LID137" rel="#L137">137</span>
<span id="LID138" rel="#L138">138</span>
<span id="LID139" rel="#L139">139</span>
<span id="LID140" rel="#L140">140</span>
<span id="LID141" rel="#L141">141</span>
<span id="LID142" rel="#L142">142</span>
<span id="LID143" rel="#L143">143</span>
<span id="LID144" rel="#L144">144</span>
<span id="LID145" rel="#L145">145</span>
<span id="LID146" rel="#L146">146</span>
<span id="LID147" rel="#L147">147</span>
<span id="LID148" rel="#L148">148</span>
<span id="LID149" rel="#L149">149</span>
<span id="LID150" rel="#L150">150</span>
<span id="LID151" rel="#L151">151</span>
<span id="LID152" rel="#L152">152</span>
<span id="LID153" rel="#L153">153</span>
<span id="LID154" rel="#L154">154</span>
<span id="LID155" rel="#L155">155</span>
<span id="LID156" rel="#L156">156</span>
<span id="LID157" rel="#L157">157</span>
<span id="LID158" rel="#L158">158</span>
<span id="LID159" rel="#L159">159</span>
<span id="LID160" rel="#L160">160</span>
<span id="LID161" rel="#L161">161</span>
<span id="LID162" rel="#L162">162</span>
<span id="LID163" rel="#L163">163</span>
<span id="LID164" rel="#L164">164</span>
<span id="LID165" rel="#L165">165</span>
<span id="LID166" rel="#L166">166</span>
<span id="LID167" rel="#L167">167</span>
<span id="LID168" rel="#L168">168</span>
<span id="LID169" rel="#L169">169</span>
<span id="LID170" rel="#L170">170</span>
<span id="LID171" rel="#L171">171</span>
<span id="LID172" rel="#L172">172</span>
<span id="LID173" rel="#L173">173</span>
<span id="LID174" rel="#L174">174</span>
<span id="LID175" rel="#L175">175</span>
<span id="LID176" rel="#L176">176</span>
<span id="LID177" rel="#L177">177</span>
<span id="LID178" rel="#L178">178</span>
<span id="LID179" rel="#L179">179</span>
<span id="LID180" rel="#L180">180</span>
<span id="LID181" rel="#L181">181</span>
<span id="LID182" rel="#L182">182</span>
<span id="LID183" rel="#L183">183</span>
<span id="LID184" rel="#L184">184</span>
<span id="LID185" rel="#L185">185</span>
<span id="LID186" rel="#L186">186</span>
<span id="LID187" rel="#L187">187</span>
<span id="LID188" rel="#L188">188</span>
<span id="LID189" rel="#L189">189</span>
<span id="LID190" rel="#L190">190</span>
<span id="LID191" rel="#L191">191</span>
<span id="LID192" rel="#L192">192</span>
<span id="LID193" rel="#L193">193</span>
<span id="LID194" rel="#L194">194</span>
<span id="LID195" rel="#L195">195</span>
<span id="LID196" rel="#L196">196</span>
<span id="LID197" rel="#L197">197</span>
<span id="LID198" rel="#L198">198</span>
<span id="LID199" rel="#L199">199</span>
<span id="LID200" rel="#L200">200</span>
<span id="LID201" rel="#L201">201</span>
<span id="LID202" rel="#L202">202</span>
<span id="LID203" rel="#L203">203</span>
<span id="LID204" rel="#L204">204</span>
<span id="LID205" rel="#L205">205</span>
<span id="LID206" rel="#L206">206</span>
<span id="LID207" rel="#L207">207</span>
<span id="LID208" rel="#L208">208</span>
<span id="LID209" rel="#L209">209</span>
<span id="LID210" rel="#L210">210</span>
<span id="LID211" rel="#L211">211</span>
<span id="LID212" rel="#L212">212</span>
<span id="LID213" rel="#L213">213</span>
<span id="LID214" rel="#L214">214</span>
<span id="LID215" rel="#L215">215</span>
<span id="LID216" rel="#L216">216</span>
<span id="LID217" rel="#L217">217</span>
<span id="LID218" rel="#L218">218</span>
<span id="LID219" rel="#L219">219</span>
<span id="LID220" rel="#L220">220</span>
<span id="LID221" rel="#L221">221</span>
<span id="LID222" rel="#L222">222</span>
<span id="LID223" rel="#L223">223</span>
<span id="LID224" rel="#L224">224</span>
<span id="LID225" rel="#L225">225</span>
<span id="LID226" rel="#L226">226</span>
<span id="LID227" rel="#L227">227</span>
<span id="LID228" rel="#L228">228</span>
<span id="LID229" rel="#L229">229</span>
<span id="LID230" rel="#L230">230</span>
<span id="LID231" rel="#L231">231</span>
<span id="LID232" rel="#L232">232</span>
<span id="LID233" rel="#L233">233</span>
<span id="LID234" rel="#L234">234</span>
<span id="LID235" rel="#L235">235</span>
<span id="LID236" rel="#L236">236</span>
<span id="LID237" rel="#L237">237</span>
<span id="LID238" rel="#L238">238</span>
<span id="LID239" rel="#L239">239</span>
<span id="LID240" rel="#L240">240</span>
</pre>
          </td>
          <td width="100%">
            
              <div class="highlight"><pre><div class='line' id='LC1'><span class="c1">// Copyright 2010, Ollix</span></div><div class='line' id='LC2'><span class="c1">// All rights reserved.</span></div><div class='line' id='LC3'><span class="c1">//</span></div><div class='line' id='LC4'><span class="c1">// This file is part of QMeta.</span></div><div class='line' id='LC5'><span class="c1">//</span></div><div class='line' id='LC6'><span class="c1">// QMeta is free software: you can redistribute it and/or modify it under</span></div><div class='line' id='LC7'><span class="c1">// the terms of the GNU General Public License as published by the Free</span></div><div class='line' id='LC8'><span class="c1">// Software Foundation, either version 3 of the License, or any later version.</span></div><div class='line' id='LC9'><span class="c1">//</span></div><div class='line' id='LC10'><span class="c1">// QMeta is distributed in the hope that it will be useful, but WITHOUT</span></div><div class='line' id='LC11'><span class="c1">// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or</span></div><div class='line' id='LC12'><span class="c1">// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License</span></div><div class='line' id='LC13'><span class="c1">// for more details.</span></div><div class='line' id='LC14'><span class="c1">//</span></div><div class='line' id='LC15'><span class="c1">// You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC16'><span class="c1">// along with QMeta. If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="c1">// ---</span></div><div class='line' id='LC19'><span class="c1">// Author: olliwang@ollix.com (Olli Wang)</span></div><div class='line' id='LC20'><span class="c1">//</span></div><div class='line' id='LC21'><span class="c1">// QMeta - a library to manipulate image metadata based on Qt.</span></div><div class='line' id='LC22'><span class="c1">//</span></div><div class='line' id='LC23'><span class="c1">// This file implements the detail of the Exif class.</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &quot;qmeta/exif.h&quot;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#include &lt;QtCore&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;qitty/byte_array.h&gt;</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="cp">#include &quot;qmeta/tiff_header.h&quot;</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="k">namespace</span> <span class="n">qmeta</span> <span class="p">{</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="n">Exif</span><span class="o">::</span><span class="n">Exif</span><span class="p">(</span><span class="n">QObject</span> <span class="o">*</span><span class="n">parent</span><span class="p">)</span> <span class="o">:</span> <span class="n">Standard</span><span class="p">(</span><span class="n">parent</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC35'>&nbsp;&nbsp;<span class="n">InitTagNames</span><span class="p">();</span></div><div class='line' id='LC36'>&nbsp;&nbsp;<span class="n">QHash</span><span class="o">&lt;</span><span class="n">Tag</span><span class="p">,</span> <span class="n">qint64</span><span class="o">&gt;</span> <span class="n">tag_offsets</span><span class="p">;</span></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="n">set_tag_offsets</span><span class="p">(</span><span class="n">tag_offsets</span><span class="p">);</span></div><div class='line' id='LC38'><span class="p">}</span></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><span class="c1">// Initializes the Exif object.</span></div><div class='line' id='LC41'><span class="kt">bool</span> <span class="n">Exif</span><span class="o">::</span><span class="n">Init</span><span class="p">(</span><span class="n">QIODevice</span> <span class="o">*</span><span class="n">file</span><span class="p">,</span> <span class="n">TiffHeader</span> <span class="o">*</span><span class="n">tiff_header</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="n">set_file</span><span class="p">(</span><span class="n">file</span><span class="p">);</span></div><div class='line' id='LC43'>&nbsp;&nbsp;<span class="n">set_tiff_header</span><span class="p">(</span><span class="n">tiff_header</span><span class="p">);</span></div><div class='line' id='LC44'>&nbsp;&nbsp;<span class="n">tiff_header</span><span class="o">-&gt;</span><span class="n">ToFirstIfd</span><span class="p">();</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="n">ReadIfds</span><span class="p">(</span><span class="n">tiff_header</span><span class="o">-&gt;</span><span class="n">current_ifd_offset</span><span class="p">());</span></div><div class='line' id='LC46'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">tag_offsets</span><span class="p">().</span><span class="n">count</span><span class="p">()</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="kc">false</span><span class="p">;</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="kc">true</span><span class="p">;</span></div><div class='line' id='LC50'><span class="p">}</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="c1">// Initializes tag names used in Exif.</span></div><div class='line' id='LC53'><span class="kt">void</span> <span class="n">Exif</span><span class="o">::</span><span class="n">InitTagNames</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="n">QHash</span><span class="o">&lt;</span><span class="n">Tag</span><span class="p">,</span> <span class="n">QString</span><span class="o">&gt;</span> <span class="n">tag_names</span><span class="p">;</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="c1">// Exif-specific IFD.</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExifIfdPointer</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exif IFD Pointer&quot;</span><span class="p">));</span></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGpsInfoIfdPointer</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Info IFD Pointer&quot;</span><span class="p">));</span></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kInteroperabilityIfdPointer</span><span class="p">,</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Interoperability IFD Pointer&quot;</span><span class="p">));</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="c1">// TIFF Rev. 6.0 attribute information used in Exif.</span></div><div class='line' id='LC61'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageWidth</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Width&quot;</span><span class="p">));</span></div><div class='line' id='LC62'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageLength</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Height&quot;</span><span class="p">));</span></div><div class='line' id='LC63'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kBitsPerSample</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Bits Per Sample&quot;</span><span class="p">));</span></div><div class='line' id='LC64'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCompression</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Compression&quot;</span><span class="p">));</span></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kPhotometricInterpretation</span><span class="p">,</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Photometric Interpretation&quot;</span><span class="p">));</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kOrientation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Orientation&quot;</span><span class="p">));</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSamplesPerPixel</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Samples Per Pixel&quot;</span><span class="p">));</span></div><div class='line' id='LC69'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kPlanarConfiguration</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Planar Configuration&quot;</span><span class="p">));</span></div><div class='line' id='LC70'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kYCbCrSubSampling</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;YCbCr Sub Sampling&quot;</span><span class="p">));</span></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kYCbCrPositioning</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;YCbCr Positioning&quot;</span><span class="p">));</span></div><div class='line' id='LC72'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kXResolution</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;X-Resolution&quot;</span><span class="p">));</span></div><div class='line' id='LC73'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kYResolution</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Y-Resolution&quot;</span><span class="p">));</span></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kResolutionUnit</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Resolution Unit&quot;</span><span class="p">));</span></div><div class='line' id='LC75'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kStripOffsets</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Strip Offsets&quot;</span><span class="p">));</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kRowsPerStrip</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Rows Per Strip&quot;</span><span class="p">));</span></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kStripByteCounts</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Strip Byte Counts&quot;</span><span class="p">));</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kJPEGInterchangeFormat</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;JPEG Interchange Format&quot;</span><span class="p">));</span></div><div class='line' id='LC79'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kJPEGInterchangeFormatLength</span><span class="p">,</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;JPEG Interchange Format Length&quot;</span><span class="p">));</span></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kTransferFunction</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Transfer Function&quot;</span><span class="p">));</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kWhitePoint</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;White Point&quot;</span><span class="p">));</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kPrimaryChromaticities</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Primary Chromaticities&quot;</span><span class="p">));</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kYCbCrCoefficients</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;YCbCr Coefficients&quot;</span><span class="p">));</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReferenceBlackWhite</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Reference Black White&quot;</span><span class="p">));</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDateTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Date Time&quot;</span><span class="p">));</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageDescription</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Description&quot;</span><span class="p">));</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kMake</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Make&quot;</span><span class="p">));</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kModel</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Model&quot;</span><span class="p">));</span></div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSoftware</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Software&quot;</span><span class="p">));</span></div><div class='line' id='LC91'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kArtist</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Artist&quot;</span><span class="p">));</span></div><div class='line' id='LC92'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCopyright</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Copyright&quot;</span><span class="p">));</span></div><div class='line' id='LC93'>&nbsp;&nbsp;<span class="c1">// The attribute information recorded in the Exif IFD.</span></div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExifVersion</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exif Version&quot;</span><span class="p">));</span></div><div class='line' id='LC95'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFlashpixVersion</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Flashpix Version&quot;</span><span class="p">));</span></div><div class='line' id='LC96'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kColorSpace</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Color Space&quot;</span><span class="p">));</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kComponentsConfiguration</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Components Configuration&quot;</span><span class="p">));</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCompressedBitsPerPixel</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Compressed Bits Per Pixel&quot;</span><span class="p">));</span></div><div class='line' id='LC99'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kPixelXDimension</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Pixel X Dimension&quot;</span><span class="p">));</span></div><div class='line' id='LC100'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kPixelYDimension</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Pixel Y Dimension&quot;</span><span class="p">));</span></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kMakerNote</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Maker Note&quot;</span><span class="p">));</span></div><div class='line' id='LC102'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kUserComment</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;User Comment&quot;</span><span class="p">));</span></div><div class='line' id='LC103'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kRelatedSoundFile</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Related Sound File&quot;</span><span class="p">));</span></div><div class='line' id='LC104'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDateTimeOriginal</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Date Time Original&quot;</span><span class="p">));</span></div><div class='line' id='LC105'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDateTimeDigitized</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Date Time Digitized&quot;</span><span class="p">));</span></div><div class='line' id='LC106'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubSecTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sub Sec Time&quot;</span><span class="p">));</span></div><div class='line' id='LC107'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubSecTimeOriginal</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sub Sec Time Original&quot;</span><span class="p">));</span></div><div class='line' id='LC108'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubSecTimeDigitized</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sub Sec Time Digitized&quot;</span><span class="p">));</span></div><div class='line' id='LC109'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExposureTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exposure Time&quot;</span><span class="p">));</span></div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFNumber</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;F Number&quot;</span><span class="p">));</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExposureProgram</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exposure Program&quot;</span><span class="p">));</span></div><div class='line' id='LC112'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSpectralSensitivity</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Spectral Sensitivity&quot;</span><span class="p">));</span></div><div class='line' id='LC113'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kISOSpeedRatings</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;ISO Speed Rating&quot;</span><span class="p">));</span></div><div class='line' id='LC114'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kOECF</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Optoelectric conversion factor&quot;</span><span class="p">));</span></div><div class='line' id='LC115'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kShutterSpeedValue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Shutter Speed&quot;</span><span class="p">));</span></div><div class='line' id='LC116'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kApertureValue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Aperture Value&quot;</span><span class="p">));</span></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kBrightnessValue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Brightness&quot;</span><span class="p">));</span></div><div class='line' id='LC118'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExposureBiasValue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exposure Bias&quot;</span><span class="p">));</span></div><div class='line' id='LC119'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kMaxApertureValue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Maximum Lens Aperture&quot;</span><span class="p">));</span></div><div class='line' id='LC120'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubjectDistance</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Subject Distance&quot;</span><span class="p">));</span></div><div class='line' id='LC121'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kMeteringMode</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Metering Mode&quot;</span><span class="p">));</span></div><div class='line' id='LC122'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kLightSource</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Light Source&quot;</span><span class="p">));</span></div><div class='line' id='LC123'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFlash</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Flash&quot;</span><span class="p">));</span></div><div class='line' id='LC124'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFocalLength</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Focal Length&quot;</span><span class="p">));</span></div><div class='line' id='LC125'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubjectArea</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Subject Area&quot;</span><span class="p">));</span></div><div class='line' id='LC126'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFlashEnergy</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Flash Energy&quot;</span><span class="p">));</span></div><div class='line' id='LC127'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSpatialFrequencyResponse</span><span class="p">,</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Spatial Frequency Response&quot;</span><span class="p">));</span></div><div class='line' id='LC129'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFocalPlaneXResolution</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Focal Plane X Resolution&quot;</span><span class="p">));</span></div><div class='line' id='LC130'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFocalPlaneYResolution</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Focal Plane Y Resolution&quot;</span><span class="p">));</span></div><div class='line' id='LC131'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFocalPlaneResolutionUnit</span><span class="p">,</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Focal Plane Resolution Unit&quot;</span><span class="p">));</span></div><div class='line' id='LC133'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubjectLocation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Subject Location&quot;</span><span class="p">));</span></div><div class='line' id='LC134'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExposureIndex</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exposure Index&quot;</span><span class="p">));</span></div><div class='line' id='LC135'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSensingMethod</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sensing Method&quot;</span><span class="p">));</span></div><div class='line' id='LC136'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFileSource</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;File Source&quot;</span><span class="p">));</span></div><div class='line' id='LC137'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSceneType</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Scene Type&quot;</span><span class="p">));</span></div><div class='line' id='LC138'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCFAPattern</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;CFA Pattern&quot;</span><span class="p">));</span></div><div class='line' id='LC139'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCustomRendered</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Custom Rendered&quot;</span><span class="p">));</span></div><div class='line' id='LC140'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExposureMode</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Exposure Mode&quot;</span><span class="p">));</span></div><div class='line' id='LC141'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kWhiteBalance</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;White Balance&quot;</span><span class="p">));</span></div><div class='line' id='LC142'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDigitalZoomRatio</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Digital Zoom Ratio&quot;</span><span class="p">));</span></div><div class='line' id='LC143'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFocalLengthIn35mmFilm</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Focal Length In 35mm Film&quot;</span><span class="p">));</span></div><div class='line' id='LC144'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSceneCaptureType</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Scene Capture Type&quot;</span><span class="p">));</span></div><div class='line' id='LC145'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGainControl</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Gain Control&quot;</span><span class="p">));</span></div><div class='line' id='LC146'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kContrast</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Contrast&quot;</span><span class="p">));</span></div><div class='line' id='LC147'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSaturation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Saturation&quot;</span><span class="p">));</span></div><div class='line' id='LC148'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSharpness</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sharpness&quot;</span><span class="p">));</span></div><div class='line' id='LC149'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDeviceSettingDescription</span><span class="p">,</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Device Setting Description&quot;</span><span class="p">));</span></div><div class='line' id='LC151'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubjectDistanceRange</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Subject Distance Range&quot;</span><span class="p">));</span></div><div class='line' id='LC152'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageUniqueID</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Unique ID&quot;</span><span class="p">));</span></div><div class='line' id='LC153'>&nbsp;&nbsp;<span class="c1">// The attribute information recorded in the GPS Info IFD.</span></div><div class='line' id='LC154'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSVersionID</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Version ID&quot;</span><span class="p">));</span></div><div class='line' id='LC155'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSLatitudeRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Latitude Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC156'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSLatitude</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Latitude&quot;</span><span class="p">));</span></div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSLongitudeRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Longitude Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSLongitude</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Longitude&quot;</span><span class="p">));</span></div><div class='line' id='LC159'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSAltitudeRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Altitude Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC160'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSAltitude</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Altitude&quot;</span><span class="p">));</span></div><div class='line' id='LC161'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSTimeStamp</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Time Stamp&quot;</span><span class="p">));</span></div><div class='line' id='LC162'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSSatellites</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Satellites&quot;</span><span class="p">));</span></div><div class='line' id='LC163'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSStatus</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Status&quot;</span><span class="p">));</span></div><div class='line' id='LC164'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSMeasureMode</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Measure Mode&quot;</span><span class="p">));</span></div><div class='line' id='LC165'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDOP</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS DOP&quot;</span><span class="p">));</span></div><div class='line' id='LC166'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSSpeedRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Speed Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC167'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSSpeed</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Speed&quot;</span><span class="p">));</span></div><div class='line' id='LC168'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSTrackRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Track Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC169'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSTrack</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Track&quot;</span><span class="p">));</span></div><div class='line' id='LC170'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSImgDirectionRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Img Direction Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC171'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSImgDirection</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Img Direction&quot;</span><span class="p">));</span></div><div class='line' id='LC172'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSMapDatum</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Map Datum&quot;</span><span class="p">));</span></div><div class='line' id='LC173'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestLatitudeRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Latitude Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC174'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestLatitude</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Latitude&quot;</span><span class="p">));</span></div><div class='line' id='LC175'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestLongitudeRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Longitude Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC176'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestLongitude</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Longitude&quot;</span><span class="p">));</span></div><div class='line' id='LC177'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestBearingRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Bearing Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC178'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestBearing</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Bearing&quot;</span><span class="p">));</span></div><div class='line' id='LC179'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestDistanceRef</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Distance Ref&quot;</span><span class="p">));</span></div><div class='line' id='LC180'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDestDistance</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Dest Distance&quot;</span><span class="p">));</span></div><div class='line' id='LC181'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSProcessingMethod</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Processing Method&quot;</span><span class="p">));</span></div><div class='line' id='LC182'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSAreaInformation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Area Information&quot;</span><span class="p">));</span></div><div class='line' id='LC183'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDateStamp</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Date Stamp&quot;</span><span class="p">));</span></div><div class='line' id='LC184'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kGPSDifferential</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;GPS Differential&quot;</span><span class="p">));</span></div><div class='line' id='LC185'>&nbsp;&nbsp;<span class="n">set_tag_names</span><span class="p">(</span><span class="n">tag_names</span><span class="p">);</span></div><div class='line' id='LC186'><span class="p">}</span></div><div class='line' id='LC187'><br/></div><div class='line' id='LC188'><span class="c1">// Reads all IFDs from the specified ifd_offset and saved</span></div><div class='line' id='LC189'><span class="kt">void</span> <span class="n">Exif</span><span class="o">::</span><span class="n">ReadIfds</span><span class="p">(</span><span class="kt">int</span> <span class="n">ifd_offset</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC190'>&nbsp;&nbsp;<span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">ToIfd</span><span class="p">(</span><span class="n">ifd_offset</span><span class="p">);</span></div><div class='line' id='LC191'><br/></div><div class='line' id='LC192'>&nbsp;&nbsp;<span class="n">QList</span><span class="o">&lt;</span><span class="n">qint64</span><span class="o">&gt;</span> <span class="n">ifd_offsets</span><span class="p">;</span></div><div class='line' id='LC193'>&nbsp;&nbsp;<span class="c1">// Reads a sequence of 12-byte field entries.</span></div><div class='line' id='LC194'>&nbsp;&nbsp;<span class="k">while</span> <span class="p">(</span><span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">HasNextIfdEntry</span><span class="p">())</span> <span class="p">{</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">ifd_entry_offset</span> <span class="o">=</span> <span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">NextIfdEntryOffset</span><span class="p">();</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Tag</span> <span class="n">tag</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="n">Tag</span><span class="o">&gt;</span><span class="p">(</span><span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">IfdEntryTag</span><span class="p">(</span><span class="n">ifd_entry_offset</span><span class="p">));</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">tag_names</span><span class="p">().</span><span class="n">contains</span><span class="p">(</span><span class="n">tag</span><span class="p">))</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">QHash</span><span class="o">&lt;</span><span class="n">Tag</span><span class="p">,</span> <span class="n">qint64</span><span class="o">&gt;</span> <span class="n">offsets</span> <span class="o">=</span> <span class="n">tag_offsets</span><span class="p">();</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">offsets</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">tag</span><span class="p">,</span> <span class="n">ifd_entry_offset</span><span class="p">);</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">set_tag_offsets</span><span class="p">(</span><span class="n">offsets</span><span class="p">);</span></div><div class='line' id='LC204'><br/></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">tag</span> <span class="o">==</span> <span class="n">kExifIfdPointer</span> <span class="o">||</span> <span class="n">tag</span> <span class="o">==</span> <span class="n">kGpsInfoIfdPointer</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">entry_value</span> <span class="o">=</span> <span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">IfdEntryValue</span><span class="p">(</span><span class="n">ifd_entry_offset</span><span class="p">);</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">ifd_pointer_offset</span> <span class="o">=</span> <span class="n">entry_value</span><span class="p">.</span><span class="n">toHex</span><span class="p">().</span><span class="n">toUInt</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="mi">16</span><span class="p">)</span> <span class="o">+</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">file_start_offset</span><span class="p">();</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ifd_offsets</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">ifd_pointer_offset</span><span class="p">);</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC211'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC212'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">ifd_offsets</span><span class="p">.</span><span class="n">count</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ReadIfds</span><span class="p">(</span><span class="n">ifd_offsets</span><span class="p">.</span><span class="n">at</span><span class="p">(</span><span class="n">i</span><span class="p">));</span></div><div class='line' id='LC214'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC215'><span class="p">}</span></div><div class='line' id='LC216'><br/></div><div class='line' id='LC217'><span class="c1">// Returns the byte data of the thumbnail saved in Exif.</span></div><div class='line' id='LC218'><span class="n">QByteArray</span> <span class="n">Exif</span><span class="o">::</span><span class="n">Thumbnail</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC219'>&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">thumbnail</span><span class="p">;</span></div><div class='line' id='LC220'>&nbsp;&nbsp;<span class="n">quint32</span> <span class="n">thumbnail_offset</span> <span class="o">=</span> <span class="n">Value</span><span class="p">(</span><span class="n">kJPEGInterchangeFormat</span><span class="p">).</span><span class="n">ToUInt</span><span class="p">();</span></div><div class='line' id='LC221'>&nbsp;&nbsp;<span class="n">quint32</span> <span class="n">length</span> <span class="o">=</span> <span class="n">Value</span><span class="p">(</span><span class="n">kJPEGInterchangeFormatLength</span><span class="p">).</span><span class="n">ToUInt</span><span class="p">();</span></div><div class='line' id='LC222'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">thumbnail_offset</span> <span class="o">&amp;&amp;</span> <span class="n">length</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">thumbnail_offset</span> <span class="o">+=</span> <span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">file_start_offset</span><span class="p">();</span></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">seek</span><span class="p">(</span><span class="n">thumbnail_offset</span><span class="p">);</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">thumbnail</span> <span class="o">=</span> <span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="n">length</span><span class="p">);</span></div><div class='line' id='LC226'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC227'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">thumbnail</span><span class="p">;</span></div><div class='line' id='LC228'><span class="p">}</span></div><div class='line' id='LC229'><br/></div><div class='line' id='LC230'><span class="c1">// Returns the value of the specified tag as a ExifData.</span></div><div class='line' id='LC231'><span class="n">ExifData</span> <span class="n">Exif</span><span class="o">::</span><span class="n">Value</span><span class="p">(</span><span class="n">Tag</span> <span class="n">tag</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC232'>&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">value</span><span class="p">;</span></div><div class='line' id='LC233'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">tag_offsets</span><span class="p">().</span><span class="n">contains</span><span class="p">(</span><span class="n">tag</span><span class="p">))</span></div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">value</span> <span class="o">=</span> <span class="n">tiff_header</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">IfdEntryValue</span><span class="p">(</span><span class="n">tag_offsets</span><span class="p">().</span><span class="n">value</span><span class="p">(</span><span class="n">tag</span><span class="p">));</span></div><div class='line' id='LC235'>&nbsp;&nbsp;<span class="n">ExifData</span> <span class="n">exif_data</span><span class="p">(</span><span class="n">value</span><span class="p">);</span></div><div class='line' id='LC236'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">exif_data</span><span class="p">;</span></div><div class='line' id='LC237'><span class="p">}</span></div><div class='line' id='LC238'><br/></div><div class='line' id='LC239'><span class="p">}</span>  <span class="c1">// namespace qmeta</span></div><div class='line' id='LC240'><br/></div></pre></div>
            
          </td>
        </tr>
      </table>
    
  </div>


      </div>
    </div>

  


    </div>
  
      

      <div class="push"></div>
    </div>

    <div id="footer">
      <div class="site">
        <div class="info">
          <div class="links">
            <a href="http://github.com/blog"><b>Blog</b></a> |
            <a href="http://support.github.com">Support</a> |
            <a href="http://github.com/training">Training</a> |
            <a href="http://github.com/contact">Contact</a> |
            <a href="http://develop.github.com">API</a> |
            <a href="http://status.github.com">Status</a> |
            <a href="http://twitter.com/github">Twitter</a> |
            <a href="http://help.github.com">Help</a> |
            <a href="http://github.com/security">Security</a>
          </div>
          <div class="company">
            &copy;
            2010
            <span id="_rrt" title="0.05579s from fe2.rs.github.com">GitHub</span> Inc.
            All rights reserved. |
            <a href="/site/terms">Terms of Service</a> |
            <a href="/site/privacy">Privacy Policy</a>
          </div>
        </div>
        <div class="sponsor">
          <div>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
          <a href="http://www.rackspace.com">
            <img alt="Dedicated Server" src="http://assets2.github.com/images/modules/footer/rackspace_logo.png?943fe5b66ca533004a921a83178f661ea31c13c0" />
          </a>
        </div>
      </div>
    </div>

    <script>window._auth_token = "e462204c4567a596cfe84faade56d376be913e51"</script>
    

    <script type="text/javascript">
      _kmq.push(['trackClick', 'entice_banner_link', 'Entice banner clicked']);
      
    </script>
    
  </body>
</html>

