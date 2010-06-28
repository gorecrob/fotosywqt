
  
  

  


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>include/qmeta/standard.h at master from ollix's qmeta - GitHub</title>
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

    
  
    
  

  <link href="http://github.com/ollix/qmeta/commits/master.atom" rel="alternate" title="Recent Commits to qmeta:master" type="application/atom+xml" />

        <meta name="description" content="A library to manipulate image metadata based on Qt." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "ollix/qmeta";
      GitHub.currentRef = "master";
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
    <li><a href="http://github.com/ollix/qmeta/tree/master" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="http://github.com/ollix/qmeta/commits/master" highlight="repo_commits">Commits</a></li>

    
    <li><a href="/ollix/qmeta/network" highlight="repo_network">Network (1)</a></li>

    

    
      
      <li><a href="/ollix/qmeta/issues" highlight="issues">Issues (0)</a></li>
    

    
      
      <li><a href="/ollix/qmeta/downloads">Downloads (0)</a></li>
    

    
      
      <li><a href="http://wiki.github.com/ollix/qmeta/">Wiki (1)</a></li>
    

    <li><a href="/ollix/qmeta/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
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
        
          
            <li><strong>master &#x2713;</strong></li>
            
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/ollix/qmeta/branches" class="manage">Branch List</a>
    
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
  GitHub.currentCommitRef = "master"
  GitHub.currentRepoOwner = "ollix"
  GitHub.currentRepo = "qmeta"
  GitHub.downloadRepo = '/ollix/qmeta/archives/master'

  

  
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
      <b><a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d">qmeta</a></b> / <a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d/include">include</a> / <a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d/include/qmeta">qmeta</a> / standard.h       <span style="display:none" id="clippy_3542">include/qmeta/standard.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets1.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_3542&amp;copied=copied!&amp;copyto=copy to clipboard">
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
             FlashVars="id=clippy_3542&amp;copied=copied!&amp;copyto=copy to clipboard"
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
            
              <span>56 lines (44 sloc)</span>
            
            <span>1.626 kb</span>
          </div>
          <ul class="actions">
            
              <li><a id="file-edit-link" href="#" rel="/ollix/qmeta/file-edit/__ref__/include/qmeta/standard.h">edit</a></li>
            
            <li><a href="/ollix/qmeta/raw/822a8181d24165ad0c110b5d466065a80fcc7a0d/include/qmeta/standard.h" id="raw-url">raw</a></li>
            
              <li><a href="/ollix/qmeta/blame/822a8181d24165ad0c110b5d466065a80fcc7a0d/include/qmeta/standard.h">blame</a></li>
            
            <li><a href="/ollix/qmeta/commits/master/include/qmeta/standard.h">history</a></li>
          </ul>
        </div>
        
  <div class="data syntax type-c">
    
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
</pre>
          </td>
          <td width="100%">
            
              <div class="highlight"><pre><div class='line' id='LC1'><span class="c1">// Copyright 2010, Ollix</span></div><div class='line' id='LC2'><span class="c1">// All rights reserved.</span></div><div class='line' id='LC3'><span class="c1">//</span></div><div class='line' id='LC4'><span class="c1">// This file is part of QMeta.</span></div><div class='line' id='LC5'><span class="c1">//</span></div><div class='line' id='LC6'><span class="c1">// QMeta is free software: you can redistribute it and/or modify it under</span></div><div class='line' id='LC7'><span class="c1">// the terms of the GNU General Public License as published by the Free</span></div><div class='line' id='LC8'><span class="c1">// Software Foundation, either version 3 of the License, or any later version.</span></div><div class='line' id='LC9'><span class="c1">//</span></div><div class='line' id='LC10'><span class="c1">// QMeta is distributed in the hope that it will be useful, but WITHOUT</span></div><div class='line' id='LC11'><span class="c1">// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or</span></div><div class='line' id='LC12'><span class="c1">// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License</span></div><div class='line' id='LC13'><span class="c1">// for more details.</span></div><div class='line' id='LC14'><span class="c1">//</span></div><div class='line' id='LC15'><span class="c1">// You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC16'><span class="c1">// along with QMeta. If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="c1">// ---</span></div><div class='line' id='LC19'><span class="c1">// Author: olliwang@ollix.com (Olli Wang)</span></div><div class='line' id='LC20'><span class="c1">//</span></div><div class='line' id='LC21'><span class="c1">// QMeta - a library to manipulate image metadata based on Qt.</span></div><div class='line' id='LC22'><span class="c1">//</span></div><div class='line' id='LC23'><span class="c1">// This file defines the Standard class, which is the base class for all</span></div><div class='line' id='LC24'><span class="c1">// metadata standard classes such as Exif and Iptc.</span></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><span class="cp">#ifndef QMETA_STANDARD_H_</span></div><div class='line' id='LC27'><span class="cp">#define QMETA_STANDARD_H_</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="cp">#include &lt;QObject&gt;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="n">class</span> <span class="n">QIODevice</span><span class="p">;</span></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><span class="n">namespace</span> <span class="n">qmeta</span> <span class="p">{</span></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="n">class</span> <span class="n">Standard</span> <span class="o">:</span> <span class="n">public</span> <span class="n">QObject</span> <span class="p">{</span></div><div class='line' id='LC36'>&nbsp;&nbsp;<span class="n">Q_OBJECT</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'>&nbsp;<span class="nl">public:</span></div><div class='line' id='LC39'>&nbsp;&nbsp;<span class="n">explicit</span> <span class="n">Standard</span><span class="p">(</span><span class="n">QObject</span> <span class="o">*</span><span class="n">parent</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'>&nbsp;<span class="nl">protected:</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="n">QIODevice</span><span class="o">*</span> <span class="n">file</span><span class="p">()</span> <span class="k">const</span> <span class="p">{</span> <span class="k">return</span> <span class="n">file_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC43'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">set_file</span><span class="p">(</span><span class="n">QIODevice</span> <span class="o">*</span><span class="n">file</span><span class="p">)</span> <span class="p">{</span> <span class="n">file_</span> <span class="o">=</span> <span class="n">file</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC44'>&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">file_start_offset</span><span class="p">()</span> <span class="k">const</span> <span class="p">{</span> <span class="k">return</span> <span class="n">file_start_offset_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">set_file_start_offset</span><span class="p">(</span><span class="n">qint64</span> <span class="n">offset</span><span class="p">)</span> <span class="p">{</span> <span class="n">file_start_offset_</span> <span class="o">=</span> <span class="n">offset</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="c1">// Tracks the file containing the metadata.</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="n">QIODevice</span> <span class="o">*</span><span class="n">file_</span><span class="p">;</span></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="c1">// The offset of the beginning of the metadata standard in the tracked file.</span></div><div class='line' id='LC50'>&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">file_start_offset_</span><span class="p">;</span></div><div class='line' id='LC51'><span class="p">};</span></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="p">}</span>  <span class="c1">// namespace qmeta</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cp">#endif  </span><span class="c1">// QMETA_STANDARD_H_</span></div><div class='line' id='LC56'><br/></div></pre></div>
            
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
            <span id="_rrt" title="0.05166s from fe2.rs.github.com">GitHub</span> Inc.
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

